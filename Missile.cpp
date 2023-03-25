#include "Missile.h"

using namespace std;

class Missile
{
public:
    double xPos, yPos; 
    VelocityVector missileVelocity;

    Missile()
    {
        cout << "Missile created" << endl;
    }
    Missile(double x, double y)
    {
        xPos = x;
        yPos = y;
        
        cout << "Missile created" << endl;
    }

    double calcuateLineOfSightAngle(Missile missile, Target target)
    {
        double distance = sqrt(pow(missile.xPos - target.xPos, 2) + pow(missile.yPos - target.yPos, 2));
        double yDistance = abs(missile.yPos - target.yPos);

        double lineOfSightAngle = asin(yDistance / distance);

        return lineOfSightAngle;
    }

    double calcuateTargetHeading(Missile missile, Target target)
    {
        double targetHeading = asin((missile.missileVelocity.speed / target.targetVelocity.speed) * sin(missile.missileVelocity.angle));

        return targetHeading;
    }

    //may not be needed
    bool willAnglesCollide(double a1, double a2)
    {
        if(abs(abs(a1) - abs(a2)) > 0)
        {
            return true;
        }

        return false;
    }
};