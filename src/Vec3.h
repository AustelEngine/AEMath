//     AustelEngine(C) 2019 - Nietsloh
//----------------------------------------
//		Author      : Anthony Holstein
//		File        : Vec3.h
//		Description : todo
//----------------------------------------

#pragma once

#include "Math.h"
#include <iostream>

namespace AEMath
{
    class Vec3 {

    private:
        float m_x;
        float m_y;
        float m_z;

        AEMath::Math m_math;
    public:
        Vec3(float x, float y, float z);
        float Magnitude();
        Vec3 Normalize();
        Vec3 Cross(const Vec3& vec3);
        float Dot(Vec3 vec3);
        Vec3 Negative();
        float Max();
        float Min();
        void Add(float a);
        void Sub(float a);
        void Mul(float a);
        void Div(float a);
        void Add(float x, float y, float z);
        void Sub(float x, float y, float z);
        void Mul(float x, float y, float z);
        void Div(float x, float y, float z);
        void operator+=(const Vec3& vec3);
        void operator-=(const Vec3& vec3);
        void operator*=(const Vec3& vec3);
        void operator/=(const Vec3& vec3);

        friend std::ostream& operator<<(std::ostream& os, const Vec3& vec3);


        float GetX() const { return this->m_x; }
        float GetY() const { return this->m_y; }
        float GetZ() const { return this->m_z; }
    };

    std::ostream& operator<<(std::ostream& os, const Vec3& vec3);
}
