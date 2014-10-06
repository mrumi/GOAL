// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mvrnormArma
arma::mat mvrnormArma(int n, arma::vec mu, arma::mat sigma);
RcppExport SEXP GOAL_mvrnormArma(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type n(nSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP );
        arma::mat __result = mvrnormArma(n, mu, sigma);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// eeSNP_regress
Rcpp::List eeSNP_regress(arma::mat x, arma::vec y, arma::mat feature, arma::colvec alpHa, arma::colvec beTa, bool estimate_alpha, bool estimate_beta, arma::colvec B_inv_alpHa, int itermax, int thin, int burnIn);
RcppExport SEXP GOAL_eeSNP_regress(SEXP xSEXP, SEXP ySEXP, SEXP featureSEXP, SEXP alpHaSEXP, SEXP beTaSEXP, SEXP estimate_alphaSEXP, SEXP estimate_betaSEXP, SEXP B_inv_alpHaSEXP, SEXP itermaxSEXP, SEXP thinSEXP, SEXP burnInSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::mat >::type feature(featureSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type alpHa(alpHaSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type beTa(beTaSEXP );
        Rcpp::traits::input_parameter< bool >::type estimate_alpha(estimate_alphaSEXP );
        Rcpp::traits::input_parameter< bool >::type estimate_beta(estimate_betaSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type B_inv_alpHa(B_inv_alpHaSEXP );
        Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP );
        Rcpp::traits::input_parameter< int >::type thin(thinSEXP );
        Rcpp::traits::input_parameter< int >::type burnIn(burnInSEXP );
        Rcpp::List __result = eeSNP_regress(x, y, feature, alpHa, beTa, estimate_alpha, estimate_beta, B_inv_alpHa, itermax, thin, burnIn);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// find_correlation
arma::vec find_correlation(Rcpp::List mask, arma::mat x, arma::mat y);
RcppExport SEXP GOAL_find_correlation(SEXP maskSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::List >::type mask(maskSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        arma::vec __result = find_correlation(mask, x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// filterSNP
Rcpp::List filterSNP(Rcpp::List obj, bool parseFeature, double threshold);
RcppExport SEXP GOAL_filterSNP(SEXP objSEXP, SEXP parseFeatureSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP );
        Rcpp::traits::input_parameter< bool >::type parseFeature(parseFeatureSEXP );
        Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP );
        Rcpp::List __result = filterSNP(obj, parseFeature, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// filter_inconsequential
arma::vec filter_inconsequential(Rcpp::List mask, arma::mat x, arma::mat y, int threshold);
RcppExport SEXP GOAL_filter_inconsequential(SEXP maskSEXP, SEXP xSEXP, SEXP ySEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::List >::type mask(maskSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP );
        arma::vec __result = filter_inconsequential(mask, x, y, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// univariate_eQTL
arma::vec univariate_eQTL(arma::umat mask2, arma::mat x, arma::mat y, arma::vec numRegulators, int threads = 1);
RcppExport SEXP GOAL_univariate_eQTL(SEXP mask2SEXP, SEXP xSEXP, SEXP ySEXP, SEXP numRegulatorsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::umat >::type mask2(mask2SEXP );
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::vec >::type numRegulators(numRegulatorsSEXP );
        Rcpp::traits::input_parameter< int >::type threads(threadsSEXP );
        arma::vec __result = univariate_eQTL(mask2, x, y, numRegulators, threads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// multivariate_eQTL
arma::vec multivariate_eQTL(arma::umat mask2, arma::mat x, arma::mat y, arma::vec numRegulators, int threads = 1);
RcppExport SEXP GOAL_multivariate_eQTL(SEXP mask2SEXP, SEXP xSEXP, SEXP ySEXP, SEXP numRegulatorsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::umat >::type mask2(mask2SEXP );
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::vec >::type numRegulators(numRegulatorsSEXP );
        Rcpp::traits::input_parameter< int >::type threads(threadsSEXP );
        arma::vec __result = multivariate_eQTL(mask2, x, y, numRegulators, threads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cholGivensRotateLeft
arma::mat cholGivensRotateLeft(arma::mat TT, arma::mat inp = arma::mat());
RcppExport SEXP GOAL_cholGivensRotateLeft(SEXP TTSEXP, SEXP inpSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type TT(TTSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type inp(inpSEXP );
        arma::mat __result = cholGivensRotateLeft(TT, inp);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cholAddCol
arma::mat cholAddCol(arma::mat TT, arma::vec xx, arma::mat inp = arma::mat());
RcppExport SEXP GOAL_cholAddCol(SEXP TTSEXP, SEXP xxSEXP, SEXP inpSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type TT(TTSEXP );
        Rcpp::traits::input_parameter< arma::vec >::type xx(xxSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type inp(inpSEXP );
        arma::mat __result = cholAddCol(TT, xx, inp);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// pinvgammaC
double pinvgammaC(double q, double shape, double scale, int lower_tail = 1, int log_p = 0);
RcppExport SEXP GOAL_pinvgammaC(SEXP qSEXP, SEXP shapeSEXP, SEXP scaleSEXP, SEXP lower_tailSEXP, SEXP log_pSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type q(qSEXP );
        Rcpp::traits::input_parameter< double >::type shape(shapeSEXP );
        Rcpp::traits::input_parameter< double >::type scale(scaleSEXP );
        Rcpp::traits::input_parameter< int >::type lower_tail(lower_tailSEXP );
        Rcpp::traits::input_parameter< int >::type log_p(log_pSEXP );
        double __result = pinvgammaC(q, shape, scale, lower_tail, log_p);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rinvgammaC
double rinvgammaC(double shape, double scale);
RcppExport SEXP GOAL_rinvgammaC(SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type shape(shapeSEXP );
        Rcpp::traits::input_parameter< double >::type scale(scaleSEXP );
        double __result = rinvgammaC(shape, scale);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// epi_eQTL
Rcpp::List epi_eQTL(arma::mat x, arma::mat y, arma::mat feature, arma::mat pairFeature, arma::umat mask2, arma::colvec alpHa, arma::colvec gamMa, bool estimate_alpha, bool estimate_beta, arma::colvec B_inv_alpHa, int itermax, int thin, int burnIn, int threads, bool verbose = true, bool balance = true, bool logistic_variable_selection = true, bool oversample = false, bool sample_logit = false, bool use_raoblackwell = true, int num_logit_train = 1000, int negtrain_num = 1000, double ratio = 1, double gamMa_thres = .9, double beTa_thres = .1, double regulator_prior = 1.0/300.0, int accIter = 1, double rho = 100.0, double prior = .1);
RcppExport SEXP GOAL_epi_eQTL(SEXP xSEXP, SEXP ySEXP, SEXP featureSEXP, SEXP pairFeatureSEXP, SEXP mask2SEXP, SEXP alpHaSEXP, SEXP gamMaSEXP, SEXP estimate_alphaSEXP, SEXP estimate_betaSEXP, SEXP B_inv_alpHaSEXP, SEXP itermaxSEXP, SEXP thinSEXP, SEXP burnInSEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP balanceSEXP, SEXP logistic_variable_selectionSEXP, SEXP oversampleSEXP, SEXP sample_logitSEXP, SEXP use_raoblackwellSEXP, SEXP num_logit_trainSEXP, SEXP negtrain_numSEXP, SEXP ratioSEXP, SEXP gamMa_thresSEXP, SEXP beTa_thresSEXP, SEXP regulator_priorSEXP, SEXP accIterSEXP, SEXP rhoSEXP, SEXP priorSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::mat >::type feature(featureSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type pairFeature(pairFeatureSEXP );
        Rcpp::traits::input_parameter< arma::umat >::type mask2(mask2SEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type alpHa(alpHaSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type gamMa(gamMaSEXP );
        Rcpp::traits::input_parameter< bool >::type estimate_alpha(estimate_alphaSEXP );
        Rcpp::traits::input_parameter< bool >::type estimate_beta(estimate_betaSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type B_inv_alpHa(B_inv_alpHaSEXP );
        Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP );
        Rcpp::traits::input_parameter< int >::type thin(thinSEXP );
        Rcpp::traits::input_parameter< int >::type burnIn(burnInSEXP );
        Rcpp::traits::input_parameter< int >::type threads(threadsSEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        Rcpp::traits::input_parameter< bool >::type balance(balanceSEXP );
        Rcpp::traits::input_parameter< bool >::type logistic_variable_selection(logistic_variable_selectionSEXP );
        Rcpp::traits::input_parameter< bool >::type oversample(oversampleSEXP );
        Rcpp::traits::input_parameter< bool >::type sample_logit(sample_logitSEXP );
        Rcpp::traits::input_parameter< bool >::type use_raoblackwell(use_raoblackwellSEXP );
        Rcpp::traits::input_parameter< int >::type num_logit_train(num_logit_trainSEXP );
        Rcpp::traits::input_parameter< int >::type negtrain_num(negtrain_numSEXP );
        Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP );
        Rcpp::traits::input_parameter< double >::type gamMa_thres(gamMa_thresSEXP );
        Rcpp::traits::input_parameter< double >::type beTa_thres(beTa_thresSEXP );
        Rcpp::traits::input_parameter< double >::type regulator_prior(regulator_priorSEXP );
        Rcpp::traits::input_parameter< int >::type accIter(accIterSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< double >::type prior(priorSEXP );
        Rcpp::List __result = epi_eQTL(x, y, feature, pairFeature, mask2, alpHa, gamMa, estimate_alpha, estimate_beta, B_inv_alpHa, itermax, thin, burnIn, threads, verbose, balance, logistic_variable_selection, oversample, sample_logit, use_raoblackwell, num_logit_train, negtrain_num, ratio, gamMa_thres, beTa_thres, regulator_prior, accIter, rho, prior);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// epi_eQTL_dissecting
Rcpp::List epi_eQTL_dissecting(arma::mat x, arma::mat y, arma::mat feature, arma::mat pairFeature, arma::umat mask2, arma::colvec alpHa, arma::colvec gamMa, bool estimate_alpha, bool estimate_beta, arma::colvec B_inv_alpHa, int itermax, int thin, int burnIn, int threads, bool verbose = true, bool balance = true, bool logistic_variable_selection = true, bool oversample = false, bool sample_logit = false, bool use_raoblackwell = true, int num_logit_train = 1000, double ratio = .5, double gamMa_thres = .9, double beTa_thres = .1, double regulator_prior = 1.0/300.0, int accIter = 1, double rho = 1, double prior = .1);
RcppExport SEXP GOAL_epi_eQTL_dissecting(SEXP xSEXP, SEXP ySEXP, SEXP featureSEXP, SEXP pairFeatureSEXP, SEXP mask2SEXP, SEXP alpHaSEXP, SEXP gamMaSEXP, SEXP estimate_alphaSEXP, SEXP estimate_betaSEXP, SEXP B_inv_alpHaSEXP, SEXP itermaxSEXP, SEXP thinSEXP, SEXP burnInSEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP balanceSEXP, SEXP logistic_variable_selectionSEXP, SEXP oversampleSEXP, SEXP sample_logitSEXP, SEXP use_raoblackwellSEXP, SEXP num_logit_trainSEXP, SEXP ratioSEXP, SEXP gamMa_thresSEXP, SEXP beTa_thresSEXP, SEXP regulator_priorSEXP, SEXP accIterSEXP, SEXP rhoSEXP, SEXP priorSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP );
        Rcpp::traits::input_parameter< arma::mat >::type feature(featureSEXP );
        Rcpp::traits::input_parameter< arma::mat >::type pairFeature(pairFeatureSEXP );
        Rcpp::traits::input_parameter< arma::umat >::type mask2(mask2SEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type alpHa(alpHaSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type gamMa(gamMaSEXP );
        Rcpp::traits::input_parameter< bool >::type estimate_alpha(estimate_alphaSEXP );
        Rcpp::traits::input_parameter< bool >::type estimate_beta(estimate_betaSEXP );
        Rcpp::traits::input_parameter< arma::colvec >::type B_inv_alpHa(B_inv_alpHaSEXP );
        Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP );
        Rcpp::traits::input_parameter< int >::type thin(thinSEXP );
        Rcpp::traits::input_parameter< int >::type burnIn(burnInSEXP );
        Rcpp::traits::input_parameter< int >::type threads(threadsSEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        Rcpp::traits::input_parameter< bool >::type balance(balanceSEXP );
        Rcpp::traits::input_parameter< bool >::type logistic_variable_selection(logistic_variable_selectionSEXP );
        Rcpp::traits::input_parameter< bool >::type oversample(oversampleSEXP );
        Rcpp::traits::input_parameter< bool >::type sample_logit(sample_logitSEXP );
        Rcpp::traits::input_parameter< bool >::type use_raoblackwell(use_raoblackwellSEXP );
        Rcpp::traits::input_parameter< int >::type num_logit_train(num_logit_trainSEXP );
        Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP );
        Rcpp::traits::input_parameter< double >::type gamMa_thres(gamMa_thresSEXP );
        Rcpp::traits::input_parameter< double >::type beTa_thres(beTa_thresSEXP );
        Rcpp::traits::input_parameter< double >::type regulator_prior(regulator_priorSEXP );
        Rcpp::traits::input_parameter< int >::type accIter(accIterSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< double >::type prior(priorSEXP );
        Rcpp::List __result = epi_eQTL_dissecting(x, y, feature, pairFeature, mask2, alpHa, gamMa, estimate_alpha, estimate_beta, B_inv_alpHa, itermax, thin, burnIn, threads, verbose, balance, logistic_variable_selection, oversample, sample_logit, use_raoblackwell, num_logit_train, ratio, gamMa_thres, beTa_thres, regulator_prior, accIter, rho, prior);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// filter_in
Rcpp::List filter_in(Rcpp::List obj, bool parseFeature, double threshold);
RcppExport SEXP GOAL_filter_in(SEXP objSEXP, SEXP parseFeatureSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::List >::type obj(objSEXP );
        Rcpp::traits::input_parameter< bool >::type parseFeature(parseFeatureSEXP );
        Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP );
        Rcpp::List __result = filter_in(obj, parseFeature, threshold);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ficorr
Rcpp::NumericVector ficorr();
RcppExport SEXP GOAL_ficorr() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::NumericVector __result = ficorr();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
