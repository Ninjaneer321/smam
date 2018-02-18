// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_thmam_RCPPEXPORTS_H_GEN_
#define RCPP_thmam_RCPPEXPORTS_H_GEN_

#include <RcppGSL.h>
#include <Rcpp.h>

namespace thmam {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("thmam", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("thmam", "_thmam_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in thmam");
            }
        }
    }

    inline NumericVector ths_vp00(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp00)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp00 p_ths_vp00 = NULL;
        if (p_ths_vp00 == NULL) {
            validateSignature("NumericVector(*ths_vp00)(NumericVector,double,double,double,double,double)");
            p_ths_vp00 = (Ptr_ths_vp00)R_GetCCallable("thmam", "_thmam_ths_vp00");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp00(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp01(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp01)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp01 p_ths_vp01 = NULL;
        if (p_ths_vp01 == NULL) {
            validateSignature("NumericVector(*ths_vp01)(NumericVector,double,double,double,double,double)");
            p_ths_vp01 = (Ptr_ths_vp01)R_GetCCallable("thmam", "_thmam_ths_vp01");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp01(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp02(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp02)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp02 p_ths_vp02 = NULL;
        if (p_ths_vp02 == NULL) {
            validateSignature("NumericVector(*ths_vp02)(NumericVector,double,double,double,double,double)");
            p_ths_vp02 = (Ptr_ths_vp02)R_GetCCallable("thmam", "_thmam_ths_vp02");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp02(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp10(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp10)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp10 p_ths_vp10 = NULL;
        if (p_ths_vp10 == NULL) {
            validateSignature("NumericVector(*ths_vp10)(NumericVector,double,double,double,double,double)");
            p_ths_vp10 = (Ptr_ths_vp10)R_GetCCallable("thmam", "_thmam_ths_vp10");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp10(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp11(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp11)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp11 p_ths_vp11 = NULL;
        if (p_ths_vp11 == NULL) {
            validateSignature("NumericVector(*ths_vp11)(NumericVector,double,double,double,double,double)");
            p_ths_vp11 = (Ptr_ths_vp11)R_GetCCallable("thmam", "_thmam_ths_vp11");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp11(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp12(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp12)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp12 p_ths_vp12 = NULL;
        if (p_ths_vp12 == NULL) {
            validateSignature("NumericVector(*ths_vp12)(NumericVector,double,double,double,double,double)");
            p_ths_vp12 = (Ptr_ths_vp12)R_GetCCallable("thmam", "_thmam_ths_vp12");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp12(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp20(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp20)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp20 p_ths_vp20 = NULL;
        if (p_ths_vp20 == NULL) {
            validateSignature("NumericVector(*ths_vp20)(NumericVector,double,double,double,double,double)");
            p_ths_vp20 = (Ptr_ths_vp20)R_GetCCallable("thmam", "_thmam_ths_vp20");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp20(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp21(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp21)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp21 p_ths_vp21 = NULL;
        if (p_ths_vp21 == NULL) {
            validateSignature("NumericVector(*ths_vp21)(NumericVector,double,double,double,double,double)");
            p_ths_vp21 = (Ptr_ths_vp21)R_GetCCallable("thmam", "_thmam_ths_vp21");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp21(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_vp22(NumericVector vs, double t, double lambda0, double lambda1, double lambda2, double p) {
        typedef SEXP(*Ptr_ths_vp22)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_vp22 p_ths_vp22 = NULL;
        if (p_ths_vp22 == NULL) {
            validateSignature("NumericVector(*ths_vp22)(NumericVector,double,double,double,double,double)");
            p_ths_vp22 = (Ptr_ths_vp22)R_GetCCallable("thmam", "_thmam_ths_vp22");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_vp22(Shield<SEXP>(Rcpp::wrap(vs)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(lambda0)), Shield<SEXP>(Rcpp::wrap(lambda1)), Shield<SEXP>(Rcpp::wrap(lambda2)), Shield<SEXP>(Rcpp::wrap(p)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h00(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h00)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h00 p_ths_h00 = NULL;
        if (p_ths_h00 == NULL) {
            validateSignature("NumericVector(*ths_h00)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h00 = (Ptr_ths_h00)R_GetCCallable("thmam", "_thmam_ths_h00");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h00(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h01(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h01)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h01 p_ths_h01 = NULL;
        if (p_ths_h01 == NULL) {
            validateSignature("NumericVector(*ths_h01)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h01 = (Ptr_ths_h01)R_GetCCallable("thmam", "_thmam_ths_h01");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h01(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h02(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h02)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h02 p_ths_h02 = NULL;
        if (p_ths_h02 == NULL) {
            validateSignature("NumericVector(*ths_h02)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h02 = (Ptr_ths_h02)R_GetCCallable("thmam", "_thmam_ths_h02");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h02(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h10(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h10)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h10 p_ths_h10 = NULL;
        if (p_ths_h10 == NULL) {
            validateSignature("NumericVector(*ths_h10)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h10 = (Ptr_ths_h10)R_GetCCallable("thmam", "_thmam_ths_h10");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h10(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h11(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h11)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h11 p_ths_h11 = NULL;
        if (p_ths_h11 == NULL) {
            validateSignature("NumericVector(*ths_h11)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h11 = (Ptr_ths_h11)R_GetCCallable("thmam", "_thmam_ths_h11");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h11(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h12(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h12)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h12 p_ths_h12 = NULL;
        if (p_ths_h12 == NULL) {
            validateSignature("NumericVector(*ths_h12)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h12 = (Ptr_ths_h12)R_GetCCallable("thmam", "_thmam_ths_h12");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h12(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h20(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h20)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h20 p_ths_h20 = NULL;
        if (p_ths_h20 == NULL) {
            validateSignature("NumericVector(*ths_h20)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h20 = (Ptr_ths_h20)R_GetCCallable("thmam", "_thmam_ths_h20");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h20(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h21(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h21)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h21 p_ths_h21 = NULL;
        if (p_ths_h21 == NULL) {
            validateSignature("NumericVector(*ths_h21)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h21 = (Ptr_ths_h21)R_GetCCallable("thmam", "_thmam_ths_h21");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h21(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h22(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl) {
        typedef SEXP(*Ptr_ths_h22)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h22 p_ths_h22 = NULL;
        if (p_ths_h22 == NULL) {
            validateSignature("NumericVector(*ths_h22)(NumericMatrix,NumericVector,NumericVector,NumericVector)");
            p_ths_h22 = (Ptr_ths_h22)R_GetCCallable("thmam", "_thmam_ths_h22");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h22(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h00_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h00_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h00_paral p_ths_h00_paral = NULL;
        if (p_ths_h00_paral == NULL) {
            validateSignature("NumericVector(*ths_h00_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h00_paral = (Ptr_ths_h00_paral)R_GetCCallable("thmam", "_thmam_ths_h00_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h00_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h01_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h01_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h01_paral p_ths_h01_paral = NULL;
        if (p_ths_h01_paral == NULL) {
            validateSignature("NumericVector(*ths_h01_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h01_paral = (Ptr_ths_h01_paral)R_GetCCallable("thmam", "_thmam_ths_h01_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h01_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h02_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h02_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h02_paral p_ths_h02_paral = NULL;
        if (p_ths_h02_paral == NULL) {
            validateSignature("NumericVector(*ths_h02_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h02_paral = (Ptr_ths_h02_paral)R_GetCCallable("thmam", "_thmam_ths_h02_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h02_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h10_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h10_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h10_paral p_ths_h10_paral = NULL;
        if (p_ths_h10_paral == NULL) {
            validateSignature("NumericVector(*ths_h10_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h10_paral = (Ptr_ths_h10_paral)R_GetCCallable("thmam", "_thmam_ths_h10_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h10_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h11_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h11_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h11_paral p_ths_h11_paral = NULL;
        if (p_ths_h11_paral == NULL) {
            validateSignature("NumericVector(*ths_h11_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h11_paral = (Ptr_ths_h11_paral)R_GetCCallable("thmam", "_thmam_ths_h11_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h11_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h12_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h12_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h12_paral p_ths_h12_paral = NULL;
        if (p_ths_h12_paral == NULL) {
            validateSignature("NumericVector(*ths_h12_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h12_paral = (Ptr_ths_h12_paral)R_GetCCallable("thmam", "_thmam_ths_h12_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h12_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h20_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h20_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h20_paral p_ths_h20_paral = NULL;
        if (p_ths_h20_paral == NULL) {
            validateSignature("NumericVector(*ths_h20_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h20_paral = (Ptr_ths_h20_paral)R_GetCCallable("thmam", "_thmam_ths_h20_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h20_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h21_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h21_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h21_paral p_ths_h21_paral = NULL;
        if (p_ths_h21_paral == NULL) {
            validateSignature("NumericVector(*ths_h21_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h21_paral = (Ptr_ths_h21_paral)R_GetCCallable("thmam", "_thmam_ths_h21_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h21_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector ths_h22_paral(NumericMatrix x, NumericVector t, NumericVector theta, NumericVector integrControl, int grainSize) {
        typedef SEXP(*Ptr_ths_h22_paral)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_ths_h22_paral p_ths_h22_paral = NULL;
        if (p_ths_h22_paral == NULL) {
            validateSignature("NumericVector(*ths_h22_paral)(NumericMatrix,NumericVector,NumericVector,NumericVector,int)");
            p_ths_h22_paral = (Ptr_ths_h22_paral)R_GetCCallable("thmam", "_thmam_ths_h22_paral");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_ths_h22_paral(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericMatrix con_v_m(NumericVector x) {
        typedef SEXP(*Ptr_con_v_m)(SEXP);
        static Ptr_con_v_m p_con_v_m = NULL;
        if (p_con_v_m == NULL) {
            validateSignature("NumericMatrix(*con_v_m)(NumericVector)");
            p_con_v_m = (Ptr_con_v_m)R_GetCCallable("thmam", "_thmam_con_v_m");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_con_v_m(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericMatrix >(rcpp_result_gen);
    }

    inline NumericVector con_n_v(double x) {
        typedef SEXP(*Ptr_con_n_v)(SEXP);
        static Ptr_con_n_v p_con_n_v = NULL;
        if (p_con_n_v == NULL) {
            validateSignature("NumericVector(*con_n_v)(double)");
            p_con_n_v = (Ptr_con_n_v)R_GetCCallable("thmam", "_thmam_con_n_v");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_con_n_v(Shield<SEXP>(Rcpp::wrap(x)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline double nllk_fwd_ths(NumericVector& theta, NumericMatrix& data, NumericVector& integrControl) {
        typedef SEXP(*Ptr_nllk_fwd_ths)(SEXP,SEXP,SEXP);
        static Ptr_nllk_fwd_ths p_nllk_fwd_ths = NULL;
        if (p_nllk_fwd_ths == NULL) {
            validateSignature("double(*nllk_fwd_ths)(NumericVector&,NumericMatrix&,NumericVector&)");
            p_nllk_fwd_ths = (Ptr_nllk_fwd_ths)R_GetCCallable("thmam", "_thmam_nllk_fwd_ths");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_nllk_fwd_ths(Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(integrControl)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double nllk_fwd_ths_parallel(NumericVector& theta, NumericMatrix& data, NumericVector& integrControl, int grainSize) {
        typedef SEXP(*Ptr_nllk_fwd_ths_parallel)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_nllk_fwd_ths_parallel p_nllk_fwd_ths_parallel = NULL;
        if (p_nllk_fwd_ths_parallel == NULL) {
            validateSignature("double(*nllk_fwd_ths_parallel)(NumericVector&,NumericMatrix&,NumericVector&,int)");
            p_nllk_fwd_ths_parallel = (Ptr_nllk_fwd_ths_parallel)R_GetCCallable("thmam", "_thmam_nllk_fwd_ths_parallel");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_nllk_fwd_ths_parallel(Shield<SEXP>(Rcpp::wrap(theta)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(integrControl)), Shield<SEXP>(Rcpp::wrap(grainSize)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

}

#endif // RCPP_thmam_RCPPEXPORTS_H_GEN_
