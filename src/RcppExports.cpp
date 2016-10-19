// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_Dstar
double get_Dstar(double D_e, double V, double r, double P, double s_h, double mu_h, double tau_ell, double s_c, double mu_c, double tau_n, double delta, double frac_n);
RcppExport SEXP forcedMigration_get_Dstar(SEXP D_eSEXP, SEXP VSEXP, SEXP rSEXP, SEXP PSEXP, SEXP s_hSEXP, SEXP mu_hSEXP, SEXP tau_ellSEXP, SEXP s_cSEXP, SEXP mu_cSEXP, SEXP tau_nSEXP, SEXP deltaSEXP, SEXP frac_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type D_e(D_eSEXP);
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type P(PSEXP);
    Rcpp::traits::input_parameter< double >::type s_h(s_hSEXP);
    Rcpp::traits::input_parameter< double >::type mu_h(mu_hSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< double >::type mu_c(mu_cSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type frac_n(frac_nSEXP);
    __result = Rcpp::wrap(get_Dstar(D_e, V, r, P, s_h, mu_h, tau_ell, s_c, mu_c, tau_n, delta, frac_n));
    return __result;
END_RCPP
}
// get_migration_eq
double get_migration_eq(double V, double r, double P, double s_h, double mu_h, double tau_ell, double s_c, double mu_c, double tau_n, double delta, double frac_n);
RcppExport SEXP forcedMigration_get_migration_eq(SEXP VSEXP, SEXP rSEXP, SEXP PSEXP, SEXP s_hSEXP, SEXP mu_hSEXP, SEXP tau_ellSEXP, SEXP s_cSEXP, SEXP mu_cSEXP, SEXP tau_nSEXP, SEXP deltaSEXP, SEXP frac_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type P(PSEXP);
    Rcpp::traits::input_parameter< double >::type s_h(s_hSEXP);
    Rcpp::traits::input_parameter< double >::type mu_h(mu_hSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< double >::type mu_c(mu_cSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type frac_n(frac_nSEXP);
    __result = Rcpp::wrap(get_migration_eq(V, r, P, s_h, mu_h, tau_ell, s_c, mu_c, tau_n, delta, frac_n));
    return __result;
END_RCPP
}
// get_surplus
double get_surplus(double V, double r, double P, double s_h, double mu_h, double tau_ell, double s_c, double mu_c, double tau_n, double delta, double frac_n, double gamma, double alpha, double beta, double zeta);
RcppExport SEXP forcedMigration_get_surplus(SEXP VSEXP, SEXP rSEXP, SEXP PSEXP, SEXP s_hSEXP, SEXP mu_hSEXP, SEXP tau_ellSEXP, SEXP s_cSEXP, SEXP mu_cSEXP, SEXP tau_nSEXP, SEXP deltaSEXP, SEXP frac_nSEXP, SEXP gammaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP zetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type P(PSEXP);
    Rcpp::traits::input_parameter< double >::type s_h(s_hSEXP);
    Rcpp::traits::input_parameter< double >::type mu_h(mu_hSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< double >::type mu_c(mu_cSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type frac_n(frac_nSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type zeta(zetaSEXP);
    __result = Rcpp::wrap(get_surplus(V, r, P, s_h, mu_h, tau_ell, s_c, mu_c, tau_n, delta, frac_n, gamma, alpha, beta, zeta));
    return __result;
END_RCPP
}
