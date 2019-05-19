//     AustelEngine(C) 2019 - Nietsloh
//----------------------------------------
//		Author      : Anthony Holstein
//		File        : Vec2.cpp
//		Description : todo
//----------------------------------------

#include "Vec2.h"

namespace AEMath
{
    Vec2::Vec2(float x, float y)
    {
        this->m_x = x;
        this->m_y = y;
    }

    float Vec2::Magnitude()
    {
        return m_math.Sqrt(m_x * m_x + m_y * m_y);
    }

    Vec2 Vec2::Normalize()
    {
        float magnitude = Magnitude();

        m_x /= magnitude;
        m_y /= magnitude;

        return *this;
    }

    float Vec2::Dot(Vec2 Vec2)
    {
        return m_x * Vec2.m_x + m_y * Vec2.m_y;
    }

    Vec2 Vec2::Negative()
    {
        return Vec2(-m_x, -m_y);
    }

    float Vec2::Max()
    {
        return m_math.Max(m_x, m_y);
    }

    float Vec2::Min()
    {
        return m_math.Min(m_x, m_y);
    }

    void Vec2::Add(float a)
    {
        m_x += a;
        m_y += a;
    }

    void Vec2::Sub(float a)
    {
        m_x -= a;
        m_y -= a;
    }

    void Vec2::Mul(float a)
    {
        m_x *= a;
        m_y *= a;
    }

    void Vec2::Div(float a)
    {
        m_x /= a;
        m_y /= a;
    }

    void Vec2::operator+=(const Vec2& Vec2)
    {
        m_x += Vec2.m_x;
        m_y += Vec2.m_y;
    }

    void Vec2::operator-=(const Vec2& Vec2)
    {
        m_x -= Vec2.m_x;
        m_y -= Vec2.m_y;
    }

    void Vec2::operator*=(const Vec2& Vec2)
    {
        m_x *= Vec2.m_x;
        m_y *= Vec2.m_y;
    }

    void Vec2::operator/=(const Vec2& Vec2)
    {
        m_x /= Vec2.m_x;
        m_y /= Vec2.m_y;
    }

    void Vec2::Add(float x, float y)
    {
        m_x += x;
        m_y += y;
    }

    void Vec2::Sub(float x, float y)
    {
        m_x -= x;
        m_y -= y;
    }

    void Vec2::Mul(float x, float y)
    {
        m_x *= x;
        m_y *= y;
    }

    void Vec2::Div(float x, float y)
    {
        m_x /= x;
        m_y /= y;
    }

    std::ostream& operator<<(std::ostream& os, const Vec2& Vec2)
    {

        os << "X: " << Vec2.m_x << "\n";
        os << "Y: " << Vec2.m_y << "\n";

        return os;
    }
}