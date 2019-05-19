//     AustelEngine(C) 2019 - Nietsloh
//----------------------------------------
//		Author      : Anthony Holstein
//		File        : Vec2.h
//		Description : todo
//----------------------------------------

#pragma once

#include "Math.h"
#include <iostream>

namespace AEMath
{
    class Vec2 {

    private:
        float m_x;
        float m_y;

        AEMath::Math m_math;
    public:
        Vec2(float x, float y);
        float Magnitude();
        Vec2 Normalize();
        float Dot(Vec2 Vec2);
        Vec2 Negative();
        float Max();
        float Min();
        void Add(float a);
        void Sub(float a);
        void Mul(float a);
        void Div(float a);
        void Add(float x, float y);
        void Sub(float x, float y);
        void Mul(float x, float y);
        void Div(float x, float y);
        void operator+=(const Vec2& Vec2);
        void operator-=(const Vec2& Vec2);
        void operator*=(const Vec2& Vec2);
        void operator/=(const Vec2& Vec2);

        friend std::ostream& operator<<(std::ostream& os, const Vec2& Vec2);


        float GetX() const { return this->m_x; }
        float GetY() const { return this->m_y; }
    };

    std::ostream& operator<<(std::ostream& os, const Vec2& Vec2);
}

