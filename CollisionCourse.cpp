//2D collision course
#include "VelocityVector.h"

using namespace std;

class Target
{
public:
    // meters per sec
    double xPos, yPos;
    VelocityVector targetVelocity;

    Target()
    {
        cout << "Target created" << endl;
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

    double calcuateLineOfSightAngle(Pursuer pursuer)
    {
        double distance = sqrt(pow(pursuer.xPos - xPos, 2) + pow(pursuer.yPos - yPos, 2));
        double yDistance = abs(pursuer.yPos - yPos);

        double lineOfSightAngle = asin(yDistance / distance);

        return lineOfSightAngle;
    }
};

class Pursuer
{
public:
    double xPos, yPos; 
    VelocityVector pursuerVelocity;

    Pursuer()
    {
        cout << "Pursuer created" << endl;
    }
};

class Navigation
{
public:
    double calcuateLineOfSightAngle(Pursuer pursuer, Target target)
    {
        double distance = sqrt(pow(pursuer.xPos - target.xPos, 2) + pow(pursuer.yPos - target.yPos, 2));
        double yDistance = abs(pursuer.yPos - target.yPos);

        double lineOfSightAngle = asin(yDistance / distance);

        return lineOfSightAngle;
    }

    double calcuateTargetHeading(Pursuer pursuer, Target target)
    {
        double targetHeading = asin((pursuer.pursuerVelocity.speed / target.targetVelocity.speed) * sin(pursuer.pursuerVelocity.angle));
        return targetHeading;
    }
};

