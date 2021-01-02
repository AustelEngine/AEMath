/*
 *
 * © 2019-2021 AustelEngine, a project from Nietsloh. All rights reserved.
 */


#pragma once

#include "Math.h"
#include <iostream>

namespace AEMath
{
    class Vec4 {

    private:
        float m_x;
        float m_y;
        float m_z;
        float m_w;

        AEMath::Math m_math;
    public:
        Vec4(float x, float y, float z, float m_w);
        float Magnitude();
        Vec4 Normalize();
        float Dot(Vec4 Vec4);
        Vec4 Negative();
        float Max();
        float Min();
        void Add(float a);
        void Sub(float a);
        void Mul(float a);
        void Div(float a);
        void Add(float x, float y, float z, float w);
        void Sub(float x, float y, float z, float w);
        void Mul(float x, float y, float z, float w);
        void Div(float x, float y, float z, float w);
        void operator+=(const Vec4& Vec4);
        void operator-=(const Vec4& Vec4);
        void operator*=(const Vec4& Vec4);
        void operator/=(const Vec4& Vec4);

        friend std::ostream& operator<<(std::ostream& os, const Vec4& Vec4);


        float GetX() { return this->m_x; }
        float GetY() { return this->m_y; }
        float GetZ() { return this->m_z; }
        float GetW() { return this->m_w; }
    };

    std::ostream& operator<<(std::ostream& os, const Vec4& Vec4);


}
