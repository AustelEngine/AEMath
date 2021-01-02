/*
 *
 * © 2019-2021 AustelEngine, a project from Nietsloh. All rights reserved.
 */

#include "Vec4.h"

namespace AEMath
{
    Vec4::Vec4(float x, float y, float z, float w)
    {
        this->m_x = x;
        this->m_y = y;
        this->m_z = z;
        this->m_w = w;
    }

    float Vec4::Magnitude()
    {
        return m_math.Sqrt(m_x * m_x + m_y * m_y + m_z * m_z + m_w * m_w);
    }

    Vec4 Vec4::Normalize()
    {
        float magnitude = Magnitude();

        m_x /= magnitude;
        m_y /= magnitude;
        m_z /= magnitude;

        return *this;
    }

    float Vec4::Dot(Vec4 Vec4)
    {
        return m_x * Vec4.m_x + m_y * Vec4.m_y + m_z * Vec4.m_z;
    }

    Vec4 Vec4::Negative()
    {
        return Vec4(-m_x, -m_y, -m_z, -m_w);
    }

    float Vec4::Max()
    {
        return m_math.Max(m_x, m_math.Max(m_y, m_math.Max(m_z, m_w)));
    }

    float Vec4::Min()
    {
        return m_math.Min(m_x, m_math.Min(m_y, m_math.Min(m_z, m_w)));
    }

    void Vec4::Add(float a)
    {
        m_x += a;
        m_y += a;
        m_z += a;
        m_w += a;
    }

    void Vec4::Sub(float a)
    {
        m_x -= a;
        m_y -= a;
        m_z -= a;
        m_w -= a;
    }

    void Vec4::Mul(float a)
    {
        m_x *= a;
        m_y *= a;
        m_z *= a;
        m_w *= a;
    }

    void Vec4::Div(float a)
    {
        m_x /= a;
        m_y /= a;
        m_z /= a;
        m_w /= a;
    }

    void Vec4::operator+=(const Vec4& Vec4)
    {
        m_x += Vec4.m_x;
        m_y += Vec4.m_y;
        m_z += Vec4.m_z;
        m_w += Vec4.m_w;
    }

    void Vec4::operator-=(const Vec4& Vec4)
    {
        m_x -= Vec4.m_x;
        m_y -= Vec4.m_y;
        m_z -= Vec4.m_z;
        m_w -= Vec4.m_w;
    }

    void Vec4::operator*=(const Vec4& Vec4)
    {
        m_x *= Vec4.m_x;
        m_y *= Vec4.m_y;
        m_z *= Vec4.m_z;
        m_w *= Vec4.m_w;
    }

    void Vec4::operator/=(const Vec4& Vec4)
    {
        m_x /= Vec4.m_x;
        m_y /= Vec4.m_y;
        m_w /= Vec4.m_w;
    }

    void Vec4::Add(float x, float y, float z, float w)
    {
        m_x += x;
        m_y += y;
        m_z += z;
        m_w += w;
    }

    void Vec4::Sub(float x, float y, float z, float w)
    {
        m_x -= x;
        m_y -= y;
        m_z -= z;
        m_w -= w;
    }

    void Vec4::Mul(float x, float y, float z, float w)
    {
        m_x *= x;
        m_y *= y;
        m_z *= z;
        m_w *= w;
    }

    void Vec4::Div(float x, float y, float z, float w)
    {
        m_x /= x;
        m_y /= y;
        m_z /= z;
        m_w /= w;
    }

    std::ostream& operator<<(std::ostream& os, const Vec4& Vec4)
    {

        os << "X: " << Vec4.m_x << "\n";
        os << "Y: " << Vec4.m_y << "\n";
        os << "Z: " << Vec4.m_z << "\n";
        os << "W: " << Vec4.m_w << "\n";

        return os;
    }
}
