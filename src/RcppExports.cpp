// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fastqCpp
List fastqCpp(std::string argv, bool sampled);
RcppExport SEXP fastqc_fastqCpp(SEXP argvSEXP, SEXP sampledSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string argv = Rcpp::as<std::string >(argvSEXP);
    bool sampled = Rcpp::as<bool >(sampledSEXP);
    List __result = fastqCpp(argv, sampled);
    return Rcpp::wrap(__result);
END_RCPP
}
// trimmoCpp
int trimmoCpp(std::string inp1, int minlen, int crop, int headcrop, bool slidingwindow, int slidingwindowlen);
RcppExport SEXP fastqc_trimmoCpp(SEXP inp1SEXP, SEXP minlenSEXP, SEXP cropSEXP, SEXP headcropSEXP, SEXP slidingwindowSEXP, SEXP slidingwindowlenSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    std::string inp1 = Rcpp::as<std::string >(inp1SEXP);
    int minlen = Rcpp::as<int >(minlenSEXP);
    int crop = Rcpp::as<int >(cropSEXP);
    int headcrop = Rcpp::as<int >(headcropSEXP);
    bool slidingwindow = Rcpp::as<bool >(slidingwindowSEXP);
    int slidingwindowlen = Rcpp::as<int >(slidingwindowlenSEXP);
    int __result = trimmoCpp(inp1, minlen, crop, headcrop, slidingwindow, slidingwindowlen);
    return Rcpp::wrap(__result);
END_RCPP
}
