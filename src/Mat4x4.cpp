//     AustelEngine(C) 2019 - Nietsloh
//----------------------------------------
//		Author      : Anthony Holstein
//		File        : Mat4x4.cpp
//		Description : todo
//----------------------------------------

#include "Mat4x4.h"
#include "Vec3.h"
#include <iostream>

namespace AEMath
{
    void Mat4x4::Identity()
    {
        for(int x = 0; x < 4; x++)
        {
            for(int y = 0; y < 4; y++)
            {
                m_matrix[x][y] = 0.0f;
            }
        }

        m_matrix[0][0] = 1;
        m_matrix[1][1] = 1;
        m_matrix[2][2] = 1;
        m_matrix[3][3] = 1;

    }

    void Mat4x4::Translate(float x, float y, float z)
    {
        m_matrix[0][3] = x;
        m_matrix[1][3] = y;
        m_matrix[2][3] = z;

        //100X
        //010Y
        //001Z
        //0001
    }

    void Mat4x4::Translate(const Vec3& vec3)
    {
        m_matrix[0][3] = vec3.GetX();
        m_matrix[1][3] = vec3.GetY();
        m_matrix[2][3] = vec3.GetZ();
        //100X
        //010Y
        //001Z
        //0001
    }

    void Mat4x4::Translate(float x, float y)
    {
        m_matrix[0][3] = x;
        m_matrix[1][3] = y;
        //100X
        //010Y
        //001Z
        //0001
    }

    void Mat4x4::Translate(Vec2& vec2)
    {
        m_matrix[0][3] = vec2.GetX();
        m_matrix[1][3] = vec2.GetY();
        //100X
        //010Y
        //001Z
        //0001
    }

    void Mat4x4::Scale(float x, float y, float z)
    {
        m_matrix[0][0] = x;
        m_matrix[1][1] = y;
        m_matrix[2][2] = z;
        //X000
        //0Y00
        //00Z0
        //0001
    }

    void Mat4x4::Scale(const Vec3& vec3)
    {
        m_matrix[0][0] = vec3.GetX();
        m_matrix[1][1] = vec3.GetY();
        m_matrix[2][2] = vec3.GetZ();
        //X000
        //0Y00
        //00Z0
        //0001
    }

    void Mat4x4::Scale(float x, float y)
    {
        m_matrix[0][0] = x;
        m_matrix[1][1] = y;
        //X000
        //0Y00
        //00Z0
        //0001
    }

    void Mat4x4::Scale(const Vec2& vec2)
    {
        m_matrix[0][0] = vec2.GetX();
        m_matrix[1][1] = vec2.GetY();
        //X000
        //0Y00
        //00Z0
        //0001
    }

    //TODO ROTATE

    void Mat4x4::Print()
    {
        for(int x = 0; x < 4; x++)
        {
            for(int y = 0; y < 4; y++)
            {
                std::cout << m_matrix[x][y];
            }
            std::cout << std::endl;
        }
    }
}