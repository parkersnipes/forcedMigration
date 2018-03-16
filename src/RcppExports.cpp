// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_Q
double get_Q(double V, double D_e, double delta);
RcppExport SEXP _forcedMigration_get_Q(SEXP VSEXP, SEXP D_eSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type D_e(D_eSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Q(V, D_e, delta));
    return rcpp_result_gen;
END_RCPP
}
// get_Dstar
double get_Dstar(double D_e, double V, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP _forcedMigration_get_Dstar(SEXP D_eSEXP, SEXP VSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type D_e(D_eSEXP);
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Dstar(D_e, V, delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_migration_eq
double get_migration_eq(double V, double start, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP _forcedMigration_get_migration_eq(SEXP VSEXP, SEXP startSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    rcpp_result_gen = Rcpp::wrap(get_migration_eq(V, start, delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_migration_cum
NumericVector get_migration_cum(NumericVector V_cum, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP _forcedMigration_get_migration_cum(SEXP V_cumSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type V_cum(V_cumSEXP);
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    rcpp_result_gen = Rcpp::wrap(get_migration_cum(V_cum, delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_X
double get_X(double Q, double tau_ell, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP _forcedMigration_get_X(SEXP QSEXP, SEXP tau_ellSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type Q(QSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    rcpp_result_gen = Rcpp::wrap(get_X(Q, tau_ell, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_X_max
double get_X_max(double tau_ell, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP _forcedMigration_get_X_max(SEXP tau_ellSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    rcpp_result_gen = Rcpp::wrap(get_X_max(tau_ell, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_D_max
double get_D_max(double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP _forcedMigration_get_D_max(SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    rcpp_result_gen = Rcpp::wrap(get_D_max(tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_payoffs
List get_payoffs(double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n, double popn);
RcppExport SEXP _forcedMigration_get_payoffs(SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP, SEXP popnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< double >::type tau_ell(tau_ellSEXP);
    Rcpp::traits::input_parameter< double >::type tau_n(tau_nSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type a0(a0SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type H_bar(H_barSEXP);
    Rcpp::traits::input_parameter< double >::type omega_n(omega_nSEXP);
    Rcpp::traits::input_parameter< double >::type popn(popnSEXP);
    rcpp_result_gen = Rcpp::wrap(get_payoffs(delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n, popn));
    return rcpp_result_gen;
END_RCPP
}
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
    {"_forcedMigration_get_Q", (DL_FUNC) &_forcedMigration_get_Q, 3},
    {"_forcedMigration_get_Dstar", (DL_FUNC) &_forcedMigration_get_Dstar, 12},
    {"_forcedMigration_get_migration_eq", (DL_FUNC) &_forcedMigration_get_migration_eq, 12},
    {"_forcedMigration_get_migration_cum", (DL_FUNC) &_forcedMigration_get_migration_cum, 11},
    {"_forcedMigration_get_X", (DL_FUNC) &_forcedMigration_get_X, 9},
    {"_forcedMigration_get_X_max", (DL_FUNC) &_forcedMigration_get_X_max, 8},
    {"_forcedMigration_get_D_max", (DL_FUNC) &_forcedMigration_get_D_max, 9},
    {"_forcedMigration_get_payoffs", (DL_FUNC) &_forcedMigration_get_payoffs, 11},
    {"_forcedMigration_get_S", (DL_FUNC) &_forcedMigration_get_S, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_forcedMigration(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
