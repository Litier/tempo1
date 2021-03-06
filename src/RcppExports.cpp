// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// myFunc
Rcpp::DataFrame myFunc(int k, int h, float alfaMAyor, float AlfaMenor, int Rinicial, int Rfinal, int nIteraciones, Rcpp::List lst, Rcpp::CharacterVector Names);
RcppExport SEXP BKTSOM_myFunc(SEXP kSEXP, SEXP hSEXP, SEXP alfaMAyorSEXP, SEXP AlfaMenorSEXP, SEXP RinicialSEXP, SEXP RfinalSEXP, SEXP nIteracionesSEXP, SEXP lstSEXP, SEXP NamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< float >::type alfaMAyor(alfaMAyorSEXP);
    Rcpp::traits::input_parameter< float >::type AlfaMenor(AlfaMenorSEXP);
    Rcpp::traits::input_parameter< int >::type Rinicial(RinicialSEXP);
    Rcpp::traits::input_parameter< int >::type Rfinal(RfinalSEXP);
    Rcpp::traits::input_parameter< int >::type nIteraciones(nIteracionesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type Names(NamesSEXP);
    rcpp_result_gen = Rcpp::wrap(myFunc(k, h, alfaMAyor, AlfaMenor, Rinicial, Rfinal, nIteraciones, lst, Names));
    return rcpp_result_gen;
END_RCPP
}
// FindBMU
int FindBMU(Rcpp::List listNeuronas, Rcpp::NumericVector dato);
RcppExport SEXP BKTSOM_FindBMU(SEXP listNeuronasSEXP, SEXP datoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type listNeuronas(listNeuronasSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dato(datoSEXP);
    rcpp_result_gen = Rcpp::wrap(FindBMU(listNeuronas, dato));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello
List rcpp_hello();
RcppExport SEXP BKTSOM_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}
