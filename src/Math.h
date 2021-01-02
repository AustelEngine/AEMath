/*
 *
 * © 2019-2021 AustelEngine, a project from Nietsloh. All rights reserved.
 */

#pragma once

#include <math.h>

namespace AEMath
{
    class Math {

    public:


        //BASICS


        template<typename A, typename B>
        double Sum(A a, B b)
        {
            return a + b;
        }

        template<typename A, typename B>
        double Sub(A a, B b)
        {
            return a - b;
        }

        template<typename A, typename B>
        double Mul(A a, B b)
        {
            return a * b;
        }

        template<typename A, typename B>
        double Div(A a, B b)
        {
            return a / b;
        }

        template<typename A, typename B>
        double Max(A a, B b)
        {
            if(a > b)
                return a;
            return b;
        }

        template<typename A, typename B>
        double Min(A a, B b)
        {
            if(a < b)
                return a;
            return b;
        }


        //TRIGONOMETRIC


        template<typename A>
        double Cos(A a)
        {
            return cos(a);
        }

        template<typename A>
        double Acos(A a)
        {
            return acos(a);
        }
        template<typename A>
        double Sin(A a)
        {
            return sin(a);
        }

        template<typename A>
        double Asin(A a)
        {
            return asin(a);
        }

        template<typename A>
        double Tan(A a)
        {
            return tan(a);
        }

        template<typename A>
        double Atan(A a)
        {
            return atan(a);
        }

        template<typename A, typename B>
        double Atan2(A a, B b)
        {
            return atan2(a, b);
        }


        //HYPERBOLIC


        template<typename A>
        double Cosh(A a)
        {
            return cosh(a);
        }

        template<typename A>
        double Sinh(A a)
        {
            return sinh(a);
        }

        template<typename A>
        double Tanh(A a)
        {
            return tanh(a);
        }

        template<typename A>
        double Acosh(float a)
        {
            return acosh(a);
        }

        template<typename A>
        double Asinh(A a)
        {
            return asinh(a);
        }

        template<typename A>
        double Atanh(A a)
        {
            return atanh(a);
        }


        //Exponential/Logarithm


        template<typename A>
        double Exp(A a)
        {
            return exp(a);
        }

        template<typename A, typename EXP>
        double Frexp(A a, EXP exp)
        {
            return frexp(a, &exp);
        }

        template<typename A, typename EXP>
        double Ldexp(A a, EXP exp)
        {
            return  ldexp(a, exp);
        }

        template<typename A>
        double Log(A a)
        {
            return log(a);
        }

        template<typename A>
        double Log10(A a)
        {
            return log10(a);
        }

        template<typename A, typename FLOATPART>
        double Modf(A a, FLOATPART floatpart)
        {
            return modf(a, &floatpart);
        }

        template<typename A>
        double Exp2(A a)
        {
            return exp2(a);
        }

        template<typename A>
        double Expm1(A a)
        {
            return expm1(a);
        }

        template<typename A>
        double Ilogb(A a)
        {
            return Ilogb(a);
        }

        template<typename A>
        double Log1p(A a)
        {
            return log1p(a);
        }

        template<typename A>
        double Log2(A a)
        {
            return log2(a);
        }

        template<typename A>
        double Logb(A a)
        {
            return logb(a);
        }

        template<typename A, typename B>
        double Scalbn(A a, B b)
        {
            return scalbn(a,b);
        }

        template<typename A, typename B>
        double Scalbln(A a, B b)
        {
            return scalbln(a, b);
        }


        //Power

        template<typename B, typename P>
        double Pow(B b, P p)
        {
            return pow(b, p);
        }

        template<typename A>
        double Sqrt(A a)
        {
            return sqrt(a);
        }

        template<typename A>
        double Cbrt(A a)
        {
            return cbrt(a);
        }

        template<typename A, typename  B>
        double Hypot(A a, B b)
        {
            return hypot(a, b);
        }
    };


}
