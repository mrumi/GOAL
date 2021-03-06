\name{eQTL_empirical_prior}
\alias{eQTL_empirical_prior}
\title{Function that implements eQTL with empirical interacting-regulatory priors }
\description{
Function that implement eQTL with empirical interacting-regulatory priors 
}
\usage{
  eQTL_empirical_prior(x, y, feature, pairFeature, mask2, alpHa, gamMa, 
  estimate_alpha, estimate_beta, B_inv_alpHa, itermax, thin, burnIn, threads,
  verbose = TRUE, balance = TRUE, logistic_variable_selection = TRUE,
  oversample = FALSE, sample_logit = FALSE, use_raoblackwell = TRUE, 
  num_logit_train = 1000L, ratio = .5, gamMa_thres = .9, beTa_thres = .1, 
  regulator_prior = 1.0/300.0, accIter = 1L, rho = 1, prior = .1)
}
\arguments{
  \item{x}{An N x P SNP matrix; with N samples and P SNPs.}
  \item{y}{An N x G gene matrix; with N samples and G genes.}
  \item{feature}{A P x F feature matrix corresponding to P SNPs, and F features.}
  \item{pairFeature}{A P x F' paired feature matrix corresponding to P SNPs and F' features}
  \item{mask2}{A P x 3 matrix that maps which SNPs are considered for which genes. Column 1: genes, column 2: SNPs, Column 3: LD block}
  \item{alpHa}{An F+F' dimensional initial feature importance parameters.}
  \item{gamMa}{An F+F' dimensional initial inclusion for each SNPs.}
  \item{estimate_alpha}{T/FALSE logical switch whether alpHa should be estimated.}
  \item{estimate_beta}{T/FALSE logical switch whether beta should be estimated.}
  \item{B_inv_alpHa}{An F+F' dimensional vector prior precision.}
  \item{itermax}{The number of maximum MCMC iteration.}
  \item{burnIn}{The number of MCMC iterations discarded.}
  \item{thin}{MCMC thin.}
  \item{threads}{The number of maximum threads.}
  \item{balance}{Should positive and negative set be balanced in logistic regression?}
  \item{logistic_variable_selection}{Should variable be used in epigenetic and paired features? It is currently experimental stage not completely tested.}
  \item{oversample}{Should oversample be used?}
  \item{sample_logit}{Not functional.}
  \item{use_raoblackwell}{Should Rao blackwellization should be used?}
  \item{num_logit_train}{The number of instances in positive set in logistic regression. If set to -1 all positive set will be taken in training.}
  \item{ratio}{The ratio of instances in positive set to all positive in logistic regression, if num_logit_train < all positive.} 
  \item{negtrain_num}{The number of instances in negative set in logistic regression.}
  \item{regulator_prior}{Prior of a region to be regultory.}
  \item{accIter}{Number of internal iterations per MCMC iteration in logistic regression.}
  \item{rho}{Prior amplification factor.}
  \item{prior}{Prior of SNP (not regulator) to be expression regulator.}
  \item{gamMa_thres}{ Threshold on gamMa for SNP to be in positive SNP. Keep default value=0.5}
  \item{beTa_thres}{ Threshold on absolute value of beTa for SNP to be in positive SNP. Keep default value=0}
  \item{verbose}{Verbosity?}
}
\value{
  \code{eQTL_empirical_prior()} Returns a list:
  \item{alpHa.mat}{A (F+F') x N matrix of sampled alpHa (feature importance). } 
  \item{beTa.mat}{A (F+F') x N matrix of sampled beTa (linear regression weights). } 
  \item{gamMa.mat}{A (F+F') x N matrix of sampled gamMa (linear regression weights). } 
  \item{gamMa_prob.mat}{A (F+F') x N matrix of sampled gamMa_prob (probability of SNP to
    be expression regulator). } 
  
}
\details{
  eQTL-empirical-prior is Bayesian model that integrates genetic and epigenetic information to
  detect SNPs causal to expression variability. 
 It models expression as linear
 model of SNPs as: 
#\deqn{   Y_j |\beta_j, X,\gamma_j  = Norm{X_{\gamma,j} \beta_{\gamma,j}, \sigma_j^2 I)}}
 The regression coefficient beta is non zero only if indicator variable gamma is nonzero.
The prior of gamma depends on (i) epigenetic feature and (ii) pairwise feature of SNP-gene interaction as 
\deqn{ \gamma = Bern (logistic(E) \alpha} )
alpha is epigenetic importance. A  MCMC is used to make inference. It simultaneously 
estimates probability of SNP to be expression regulator (gamMa) and interacting regulator (gamMa_prob). It also estimates epigenetic importance. However, alpHa must be interpreted 
carefully because epigenetic factors are highly correlated (i.e. it is good for prediction purpose only). It also estimates beTa or regression weights i.e. whether positive or negative effect on gene expression.    
  The difference with this model between eQTeL model is that this is not full Bayesian model but interacting regulatory
  potential is  a used as empirical prior. There is no semi-supervised clustering unlike eQTeL model.
}
\references{
  \enumerate{
    \item Avinash Das, MagNet Consortium, Shane Jensen, Sridhar Hannenhalli. Bayesian integration of genetics and epigenetics detects causal regulatory SNPs underlying expression variability. (Unpublished).
    \item Lee, S.I. et al. Learning a prior on regulatory potential from eQTL data. PLoS Genet 5, e1000358 (2009).
    \item Polson, N., Scott, J. & Windle, J. Bayesian inference for logistic models using Polya-Gamma latent variables. Journal of the American Statistical.  1–42 (2013).
    \item Gaffney, D. J. et al. Dissecting the regulatory architecture of gene expres- sion qtls. Genome Biol 13, R7 (2012).

  }
}

\examples{
featureStat= list(enhancer=list(mean=rep(1, 7), cov=diag(7)) ,
		  random= list(mean=rep(0, 7), cov=2*diag(7)))
obj <- generate.epieQTL.logistic( numSNP = 300, avg.eSNP=5,numGenes = 100, numSamp=1000, numFeature=7, featureStat= featureStat, seed=NULL, evSNP =0.15)
obj$pairFeature.mat <- matrix(0,0,0 )
x1 <- obj$x
x1[is.na(obj$x)] <- 0
pairf = ncol(obj$pairFeature.mat)
if(is.null(pairf)) pairf=0;
numF <- dim(obj$feature)[2]+ pairf + 1 
gamMa <- as.matrix(rep(0, nrow(obj$mask2)) )
alpHa <- as.matrix(rep(0,numF))
alpHa[1] <- obj$alpHa[1]
temp <- rep(1: ceiling(nrow(obj$mask2)/2), each=2)
mask3 = cbind( obj$mask2, temp)  

regulator_prior = 1/10
B_inv_alpHa = rep(1/1000, numF)
B_inv_alpHa[1] = 1/10000
prior <- 1/100
rho <- 100 
out <- eQTL_empirical_prior(x=x1, y=obj$y, feature=obj$feature, pairFeature=obj$pairFeature,
        mask = mask3, alpHa=alpHa, ratio =1,  gamMa = gamMa,  estimate_alpha=TRUE, estimate_beta=TRUE, 
	B_inv_alpHa=rep(1/1000,  numF), itermax = 20,  thin= 1, burnIn=0, threads=1, gamMa_thres = .5,
       	beTa_thres=0, balance=TRUE, use_raoblackwell =FALSE,  logistic_variable_selection=FALSE, 
	num_logit_train=500, regulator_prior=regulator_prior, accIter=10, prior=prior, rho=rho, verbose=FALSE)
}
\seealso{
 \code{\link[GOAL:eQTL_empirical_prior]{eQTL_empirical_prior, }} 
 \code{\link[GOAL:generate.epieQTL.logistic]{generate.epieQTL.logistic}} 
}
\author{Avinash Das }

