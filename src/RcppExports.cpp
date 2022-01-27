// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393


<include Rcpp.h>

// get_S
List get_S(arma::mat X_star, arma::vec y_star, arma::mat Q, arma::vec gamma);
RcppExport SEXP _forcedMigration_get_S(SEXP X_starSEXP, SEXP y_starSEXP, SEXP QSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X_star(X_starSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_star(y_starSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_S(X_star, y_star, Q, gamma));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_forcedMigration_get_S", (DL_FUNC) &_forcedMigration_get_S, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_forcedMigration(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
