// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// geary
double geary(NumericVector X, NumericMatrix W);
RcppExport SEXP _FastProjectR_geary(SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(geary(X, W));
    return rcpp_result_gen;
END_RCPP
}
// geary_sparse
double geary_sparse(NumericVector X, NumericMatrix ind, NumericMatrix W);
RcppExport SEXP _FastProjectR_geary_sparse(SEXP XSEXP, SEXP indSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ind(indSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(geary_sparse(X, ind, W));
    return rcpp_result_gen;
END_RCPP
}
// geary_sparse_local
NumericVector geary_sparse_local(NumericVector X, NumericMatrix ind, NumericMatrix W);
RcppExport SEXP _FastProjectR_geary_sparse_local(SEXP XSEXP, SEXP indSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ind(indSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(geary_sparse_local(X, ind, W));
    return rcpp_result_gen;
END_RCPP
}
// geary_all
NumericVector geary_all(NumericMatrix X, NumericMatrix W);
RcppExport SEXP _FastProjectR_geary_all(SEXP XSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(geary_all(X, W));
    return rcpp_result_gen;
END_RCPP
}
// geary_sparse_all
NumericVector geary_sparse_all(NumericMatrix X, NumericMatrix ind, NumericMatrix W);
RcppExport SEXP _FastProjectR_geary_sparse_all(SEXP XSEXP, SEXP indSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ind(indSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(geary_sparse_all(X, ind, W));
    return rcpp_result_gen;
END_RCPP
}
// ball_tree_vector_knn
List ball_tree_vector_knn(NumericMatrix X, NumericVector Y, int K, int n_threads);
RcppExport SEXP _FastProjectR_ball_tree_vector_knn(SEXP XSEXP, SEXP YSEXP, SEXP KSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(ball_tree_vector_knn(X, Y, K, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// ball_tree_knn
List ball_tree_knn(NumericMatrix X, int K, int n_threads);
RcppExport SEXP _FastProjectR_ball_tree_knn(SEXP XSEXP, SEXP KSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(ball_tree_knn(X, K, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// load_in_knn
NumericMatrix load_in_knn(NumericMatrix nn, NumericMatrix d);
RcppExport SEXP _FastProjectR_load_in_knn(SEXP nnSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(load_in_knn(nn, d));
    return rcpp_result_gen;
END_RCPP
}
// point_mult
void point_mult(NumericMatrix& X, NumericVector& Y);
RcppExport SEXP _FastProjectR_point_mult(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    point_mult(X, Y);
    return R_NilValue;
END_RCPP
}
// multMat
NumericVector multMat(NumericMatrix X, NumericMatrix Y);
RcppExport SEXP _FastProjectR_multMat(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(multMat(X, Y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FastProjectR_geary", (DL_FUNC) &_FastProjectR_geary, 2},
    {"_FastProjectR_geary_sparse", (DL_FUNC) &_FastProjectR_geary_sparse, 3},
    {"_FastProjectR_geary_sparse_local", (DL_FUNC) &_FastProjectR_geary_sparse_local, 3},
    {"_FastProjectR_geary_all", (DL_FUNC) &_FastProjectR_geary_all, 2},
    {"_FastProjectR_geary_sparse_all", (DL_FUNC) &_FastProjectR_geary_sparse_all, 3},
    {"_FastProjectR_ball_tree_vector_knn", (DL_FUNC) &_FastProjectR_ball_tree_vector_knn, 4},
    {"_FastProjectR_ball_tree_knn", (DL_FUNC) &_FastProjectR_ball_tree_knn, 3},
    {"_FastProjectR_load_in_knn", (DL_FUNC) &_FastProjectR_load_in_knn, 2},
    {"_FastProjectR_point_mult", (DL_FUNC) &_FastProjectR_point_mult, 2},
    {"_FastProjectR_multMat", (DL_FUNC) &_FastProjectR_multMat, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_FastProjectR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
