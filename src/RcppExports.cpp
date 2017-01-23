// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_Dstar
double get_Dstar(double D_e, double V, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP forcedMigration_get_Dstar(SEXP D_eSEXP, SEXP VSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
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
RcppExport SEXP forcedMigration_get_migration_eq(SEXP VSEXP, SEXP startSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
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
RcppExport SEXP forcedMigration_get_migration_cum(SEXP V_cumSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
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
// get_surplus
double get_surplus(double V, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n, double gamma, double alpha);
RcppExport SEXP forcedMigration_get_surplus(SEXP VSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP, SEXP gammaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
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
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_surplus(V, delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n, gamma, alpha));
    return rcpp_result_gen;
END_RCPP
}
// get_surplus_infeas
double get_surplus_infeas(double V_tilde, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n, double gamma, double alpha);
RcppExport SEXP forcedMigration_get_surplus_infeas(SEXP V_tildeSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP, SEXP gammaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type V_tilde(V_tildeSEXP);
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
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_surplus_infeas(V_tilde, delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n, gamma, alpha));
    return rcpp_result_gen;
END_RCPP
}
// get_X_max
double get_X_max(double tau_ell, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP forcedMigration_get_X_max(SEXP tau_ellSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
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
RcppExport SEXP forcedMigration_get_D_max(SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
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
// get_V_tilde_star
double get_V_tilde_star(double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n, double gamma, double alpha);
RcppExport SEXP forcedMigration_get_V_tilde_star(SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP, SEXP gammaSEXP, SEXP alphaSEXP) {
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
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_V_tilde_star(delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n, gamma, alpha));
    return rcpp_result_gen;
END_RCPP
}
// get_V_cpp
List get_V_cpp(double V_tilde, double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n);
RcppExport SEXP forcedMigration_get_V_cpp(SEXP V_tildeSEXP, SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type V_tilde(V_tildeSEXP);
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
    rcpp_result_gen = Rcpp::wrap(get_V_cpp(V_tilde, delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n));
    return rcpp_result_gen;
END_RCPP
}
// get_V_star_cpp
double get_V_star_cpp(double delta, double tau_ell, double tau_n, double r, double a0, double a1, double p, double q, double H_bar, double omega_n, double gamma, double alpha);
RcppExport SEXP forcedMigration_get_V_star_cpp(SEXP deltaSEXP, SEXP tau_ellSEXP, SEXP tau_nSEXP, SEXP rSEXP, SEXP a0SEXP, SEXP a1SEXP, SEXP pSEXP, SEXP qSEXP, SEXP H_barSEXP, SEXP omega_nSEXP, SEXP gammaSEXP, SEXP alphaSEXP) {
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
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_V_star_cpp(delta, tau_ell, tau_n, r, a0, a1, p, q, H_bar, omega_n, gamma, alpha));
    return rcpp_result_gen;
END_RCPP
}
