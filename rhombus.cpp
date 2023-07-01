﻿#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "rhombus.h"
#include "myException.h"

Rhombus::Rhombus()
{
    name = "Ромб";
    length_side_a;
    length_side_b;
    length_side_c;
    length_side_d;
    value_angle_A;
    value_angle_B;
    value_angle_C;
    value_angle_D;
};

Rhombus::Rhombus(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c, int length_side_d,
    int value_angle_A, int value_angle_B, int value_angle_C, int value_angle_D)
{
    this->sides_count = sides_count;
    this->name = name;
    if (sides_count != 4) 
    {
        throw myException("Число сторон не равно четырём");
    }

    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->length_side_d = length_side_d;
    this->value_angle_A = value_angle_A; 
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;
    this->value_angle_D = value_angle_D;

    if ((length_side_a != length_side_b) || (length_side_a != length_side_c) || (length_side_a != length_side_d)) 
    {
        throw myException("Не все стороны равны!");
    }

    if ((value_angle_A != value_angle_C) || (value_angle_B != value_angle_D)) 
    {
        throw myException("Углы A и C, B и D попарно не равны!");
    }

    message();
};