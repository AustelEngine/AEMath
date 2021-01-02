/*
 *
 * © 2019-2021 AustelEngine, a project from Nietsloh. All rights reserved.
 */

#include "Vec3.h"

namespace AEMath
{
    Vec3::Vec3(float x, float y, float z)
    {
        this->m_x = x;
        this->m_y = y;
        this->m_z = z;
    }

    float Vec3::Magnitude()
    {
        return m_math.Sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
    }

    Vec3 Vec3::Normalize()
    {
        float magnitude = Magnitude();

        m_x /= magnitude;
        m_y /= magnitude;
        m_z /= magnitude;

        return *this;
    }

    Vec3 Vec3::Cross(const Vec3& vec3)
    {
        float x = m_y * vec3.m_z - m_z * vec3.m_y;
        float y = m_z * vec3.m_x - m_x * vec3.m_z;
        float z = m_x * vec3.m_y - m_x * vec3.m_x;

        return Vec3(x, y, z);
    }

    float Vec3::Dot(Vec3 vec3)
    {
        return m_x * vec3.m_x + m_y * vec3.m_y + m_z * vec3.m_z;
    }

    Vec3 Vec3::Negative()
    {
        return Vec3(-m_x, -m_y, -m_z);
    }

    float Vec3::Max()
    {
        return m_math.Max(m_x, m_math.Max(m_y, m_z));
    }

    float Vec3::Min()
    {
        return m_math.Min(m_x, m_math.Min(m_y, m_z));
    }

    void Vec3::Add(float a)
    {
        m_x += a;
        m_y += a;
        m_z += a;
    }

    void Vec3::Sub(float a)
    {
        m_x -= a;
        m_y -= a;
        m_z -= a;
    }

    void Vec3::Mul(float a)
    {
        m_x *= a;
        m_y *= a;
        m_z *= a;
    }

    void Vec3::Div(float a)
    {
        m_x /= a;
        m_y /= a;
        m_z /= a;
    }

    void Vec3::operator+=(const Vec3& vec3)
    {
        m_x += vec3.m_x;
        m_y += vec3.m_y;
        m_z += vec3.m_z;
    }

    void Vec3::operator-=(const Vec3& vec3)
    {
        m_x -= vec3.m_x;
        m_y -= vec3.m_y;
        m_z -= vec3.m_z;
    }

    void Vec3::operator*=(const Vec3& vec3)
    {
        m_x *= vec3.m_x;
        m_y *= vec3.m_y;
        m_z *= vec3.m_z;
    }

    void Vec3::operator/=(const Vec3& vec3)
    {
        m_x /= vec3.m_x;
        m_y /= vec3.m_y;
        m_z /= vec3.m_z;
    }

    void Vec3::Add(float x, float y, float z)
    {
        m_x += x;
        m_y += y;
        m_z += z;
    }

    void Vec3::Sub(float x, float y, float z)
    {
        m_x -= x;
        m_y -= y;
        m_z -= z;
    }

    void Vec3::Mul(float x, float y, float z)
    {
        m_x *= x;
        m_y *= y;
        m_z *= z;
    }

    void Vec3::Div(float x, float y, float z)
    {
        m_x /= x;
        m_y /= y;
        m_z /= z;
    }

    std::ostream& operator<<(std::ostream& os, const Vec3& vec3)
    {

        os << "X: " << vec3.m_x << "\n";
        os << "Y: " << vec3.m_y << "\n";
        os << "Z: " << vec3.m_z << "\n";

        return os;
    }
}
