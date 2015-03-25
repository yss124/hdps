// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_rr_cds
NumericVector calc_rr_cds(NumericVector outcome, NumericMatrix covars);
RcppExport SEXP hdps_calc_rr_cds(SEXP outcomeSEXP, SEXP covarsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type outcome(outcomeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type covars(covarsSEXP);
    __result = Rcpp::wrap(calc_rr_cds(outcome, covars));
    return __result;
END_RCPP
}
// colPrevScores
NumericVector colPrevScores(NumericMatrix x);
RcppExport SEXP hdps_colPrevScores(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(colPrevScores(x));
    return __result;
END_RCPP
}
// colVars
NumericVector colVars(NumericMatrix x);
RcppExport SEXP hdps_colVars(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(colVars(x));
    return __result;
END_RCPP
}
