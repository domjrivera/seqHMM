// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// EM
List EM(const arma::mat& transition_, const arma::cube& emission_, const arma::vec& init_, const arma::ucube& obs, const arma::uvec& nSymbols, int itermax, double tol, int trace, unsigned int threads);
RcppExport SEXP seqHMM_EM(SEXP transition_SEXP, SEXP emission_SEXP, SEXP init_SEXP, SEXP obsSEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition_(transition_SEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission_(emission_SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init_(init_SEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(EM(transition_, emission_, init_, obs, nSymbols, itermax, tol, trace, threads));
    return rcpp_result_gen;
END_RCPP
}
// EMx
List EMx(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, const arma::uvec& nSymbols, arma::mat coef, const arma::mat& X, const arma::uvec& numberOfStates, int itermax, double tol, int trace, unsigned int threads);
RcppExport SEXP seqHMM_EMx(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(EMx(transition, emission, init, obs, nSymbols, coef, X, numberOfStates, itermax, tol, trace, threads));
    return rcpp_result_gen;
END_RCPP
}
// forwardbackward
List forwardbackward(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, bool forwardonly, unsigned int threads);
RcppExport SEXP seqHMM_forwardbackward(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(forwardbackward(transition, emission, init, obs, forwardonly, threads));
    return rcpp_result_gen;
END_RCPP
}
// forwardbackwardx
List forwardbackwardx(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube obs, const arma::mat& coef, const arma::mat& X, const arma::uvec& numberOfStates, bool forwardonly, unsigned int threads);
RcppExport SEXP seqHMM_forwardbackwardx(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(forwardbackwardx(transition, emission, init, obs, coef, X, numberOfStates, forwardonly, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_EM
List log_EM(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, const arma::uvec& nSymbols, int itermax, double tol, int trace, unsigned int threads);
RcppExport SEXP seqHMM_log_EM(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP nSymbolsSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_EM(transition, emission, init, obs, nSymbols, itermax, tol, trace, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_EMx
List log_EMx(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, const arma::uvec& nSymbols, arma::mat coef, const arma::mat& X, const arma::uvec& numberOfStates, int itermax, double tol, int trace, unsigned int threads);
RcppExport SEXP seqHMM_log_EMx(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_EMx(transition, emission, init, obs, nSymbols, coef, X, numberOfStates, itermax, tol, trace, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_forwardbackward
List log_forwardbackward(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, bool forwardonly, unsigned int threads);
RcppExport SEXP seqHMM_log_forwardbackward(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_forwardbackward(transition, emission, init, obs, forwardonly, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_forwardbackwardx
List log_forwardbackwardx(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, const arma::mat& coef, const arma::mat& X, const arma::uvec& numberOfStates, bool forwardonly, unsigned int threads);
RcppExport SEXP seqHMM_log_forwardbackwardx(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP forwardonlySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< bool >::type forwardonly(forwardonlySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_forwardbackwardx(transition, emission, init, obs, coef, X, numberOfStates, forwardonly, threads));
    return rcpp_result_gen;
END_RCPP
}
// logLikHMM
NumericVector logLikHMM(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, unsigned int threads);
RcppExport SEXP seqHMM_logLikHMM(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(logLikHMM(transition, emission, init, obs, threads));
    return rcpp_result_gen;
END_RCPP
}
// logLikMixHMM
NumericVector logLikMixHMM(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, const arma::mat& coef, const arma::mat& X, const arma::uvec& numberOfStates, unsigned int threads);
RcppExport SEXP seqHMM_logLikMixHMM(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(logLikMixHMM(transition, emission, init, obs, coef, X, numberOfStates, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_logLikHMM
NumericVector log_logLikHMM(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, unsigned int threads);
RcppExport SEXP seqHMM_log_logLikHMM(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_logLikHMM(transition, emission, init, obs, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_logLikMixHMM
NumericVector log_logLikMixHMM(arma::mat transition, arma::cube emission, arma::vec init, const arma::ucube& obs, const arma::mat& coef, const arma::mat& X, const arma::uvec& numberOfStates, unsigned int threads);
RcppExport SEXP seqHMM_log_logLikMixHMM(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_logLikMixHMM(transition, emission, init, obs, coef, X, numberOfStates, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_objective
List log_objective(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, const arma::umat& ANZ, const arma::ucube& BNZ, const arma::uvec& INZ, arma::uvec& nSymbols, unsigned int threads);
RcppExport SEXP seqHMM_log_objective(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP ANZSEXP, SEXP BNZSEXP, SEXP INZSEXP, SEXP nSymbolsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type ANZ(ANZSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type BNZ(BNZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type INZ(INZSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_objective(transition, emission, init, obs, ANZ, BNZ, INZ, nSymbols, threads));
    return rcpp_result_gen;
END_RCPP
}
// log_objectivex
List log_objectivex(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, const arma::umat& ANZ, const arma::ucube& BNZ, const arma::uvec& INZ, const arma::uvec& nSymbols, const arma::mat& coef, const arma::mat& X, const arma::uvec& numberOfStates, unsigned int threads);
RcppExport SEXP seqHMM_log_objectivex(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP ANZSEXP, SEXP BNZSEXP, SEXP INZSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type ANZ(ANZSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type BNZ(BNZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type INZ(INZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_objectivex(transition, emission, init, obs, ANZ, BNZ, INZ, nSymbols, coef, X, numberOfStates, threads));
    return rcpp_result_gen;
END_RCPP
}
// logSumExp
double logSumExp(const arma::vec& x);
RcppExport SEXP seqHMM_logSumExp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logSumExp(x));
    return rcpp_result_gen;
END_RCPP
}
// objective
List objective(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, arma::ucube& obs, const arma::umat& ANZ, const arma::ucube& BNZ, const arma::uvec& INZ, const arma::uvec& nSymbols, unsigned int threads);
RcppExport SEXP seqHMM_objective(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP ANZSEXP, SEXP BNZSEXP, SEXP INZSEXP, SEXP nSymbolsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type ANZ(ANZSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type BNZ(BNZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type INZ(INZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(objective(transition, emission, init, obs, ANZ, BNZ, INZ, nSymbols, threads));
    return rcpp_result_gen;
END_RCPP
}
// objectivex
List objectivex(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, const arma::umat& ANZ, const arma::ucube& BNZ, const arma::uvec& INZ, const arma::uvec& nSymbols, const arma::mat& coef, const arma::mat& X, arma::uvec& numberOfStates, unsigned int threads);
RcppExport SEXP seqHMM_objectivex(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP ANZSEXP, SEXP BNZSEXP, SEXP INZSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type ANZ(ANZSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type BNZ(BNZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type INZ(INZSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(objectivex(transition, emission, init, obs, ANZ, BNZ, INZ, nSymbols, coef, X, numberOfStates, threads));
    return rcpp_result_gen;
END_RCPP
}
// estimate_coefs
List estimate_coefs(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, const arma::uvec& nSymbols, arma::mat coef, const arma::mat& X, const arma::uvec& numberOfStates, int itermax, double tol, int trace, unsigned int threads);
RcppExport SEXP seqHMM_estimate_coefs(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP nSymbolsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP, SEXP itermaxSEXP, SEXP tolSEXP, SEXP traceSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type nSymbols(nSymbolsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    Rcpp::traits::input_parameter< int >::type itermax(itermaxSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_coefs(transition, emission, init, obs, nSymbols, coef, X, numberOfStates, itermax, tol, trace, threads));
    return rcpp_result_gen;
END_RCPP
}
// varcoef
NumericMatrix varcoef(const arma::mat& coef, const arma::mat& X);
RcppExport SEXP seqHMM_varcoef(SEXP coefSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(varcoef(coef, X));
    return rcpp_result_gen;
END_RCPP
}
// viterbi
List viterbi(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs);
RcppExport SEXP seqHMM_viterbi(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    rcpp_result_gen = Rcpp::wrap(viterbi(transition, emission, init, obs));
    return rcpp_result_gen;
END_RCPP
}
// viterbix
List viterbix(const arma::mat& transition, const arma::cube& emission, const arma::vec& init, const arma::ucube& obs, const arma::mat& coef, const arma::mat& X, const arma::uvec& numberOfStates);
RcppExport SEXP seqHMM_viterbix(SEXP transitionSEXP, SEXP emissionSEXP, SEXP initSEXP, SEXP obsSEXP, SEXP coefSEXP, SEXP XSEXP, SEXP numberOfStatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type transition(transitionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type emission(emissionSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type init(initSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type coef(coefSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type numberOfStates(numberOfStatesSEXP);
    rcpp_result_gen = Rcpp::wrap(viterbix(transition, emission, init, obs, coef, X, numberOfStates));
    return rcpp_result_gen;
END_RCPP
}
