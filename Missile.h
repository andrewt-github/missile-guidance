#pragma once

#include "VelocityVector.h"
#include "Target.h"

class Missile
{
public:
    double xPos, yPos;
    VelocityVector missileVelocity;

    Missile();
    Missile(double, double);

    double calcuateLineOfSightAngle(Missile, Target);

    double calcuateTargetHeading(Missile, Target);

    bool willAnglesCollide(double, double);
};