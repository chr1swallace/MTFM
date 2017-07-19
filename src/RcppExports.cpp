// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// modoverlap
int modoverlap(const arma::ivec& x, const arma::ivec& y);
RcppExport SEXP _MTFM_modoverlap(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::ivec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(modoverlap(x, y));
    return rcpp_result_gen;
END_RCPP
}
// calcQ2
List calcQ2(const arma::imat& M1, const arma::imat& M2, const NumericVector& pp1, const NumericVector& pp2);
RcppExport SEXP _MTFM_calcQ2(SEXP M1SEXP, SEXP M2SEXP, SEXP pp1SEXP, SEXP pp2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::imat& >::type M1(M1SEXP);
    Rcpp::traits::input_parameter< const arma::imat& >::type M2(M2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    rcpp_result_gen = Rcpp::wrap(calcQ2(M1, M2, pp1, pp2));
    return rcpp_result_gen;
END_RCPP
}
// calcQ3
List calcQ3(const arma::imat& M1, const arma::imat& M2, const arma::imat& M3, const NumericVector& pp1, const NumericVector& pp2, const NumericVector& pp3);
RcppExport SEXP _MTFM_calcQ3(SEXP M1SEXP, SEXP M2SEXP, SEXP M3SEXP, SEXP pp1SEXP, SEXP pp2SEXP, SEXP pp3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::imat& >::type M1(M1SEXP);
    Rcpp::traits::input_parameter< const arma::imat& >::type M2(M2SEXP);
    Rcpp::traits::input_parameter< const arma::imat& >::type M3(M3SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp1(pp1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp2(pp2SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pp3(pp3SEXP);
    rcpp_result_gen = Rcpp::wrap(calcQ3(M1, M2, M3, pp1, pp2, pp3));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MTFM_modoverlap", (DL_FUNC) &_MTFM_modoverlap, 2},
    {"_MTFM_calcQ2", (DL_FUNC) &_MTFM_calcQ2, 4},
    {"_MTFM_calcQ3", (DL_FUNC) &_MTFM_calcQ3, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_MTFM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
