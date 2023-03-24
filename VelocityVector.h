#pragma once

#include <iostream>
#include <math.h>
#include <cmath>

class VelocityVector
{
public:
    // meters per sec
    double speed;
    //angle relative to Euclidean Plane
    double angle;

    VelocityVector();
    VelocityVector(double, double);
    double getXComponent();
    double getYComponent();
    void assignSpeed(double);
    void assignAngle(double);
};