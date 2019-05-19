//     AustelEngine(C) 2019 - Nietsloh
//----------------------------------------
//		Author      : Anthony Holstein
//		File        : Mat4x4.h
//		Description : todo
//----------------------------------------

#pragma once


#include "Vec3.h"
#include "Vec2.h"

namespace AEMath
{
    class Mat4x4 {

    private:
        float m_matrix[4][4];
    public:
        void Identity();
        void Translate(float x, float y, float z);
        void Translate(const Vec3& vec3);
        void Translate(float x, float y);
        void Translate(Vec2& vec2);
        void Scale(float x, float y, float z);
        void Scale(const Vec3& vec3);
        void Scale(float x, float y);
        void Scale(const Vec2& vec2);
        //TODO ROTATE
        void Print();
    };



}

