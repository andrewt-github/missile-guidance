#include "VelocityVector.h"

using namespace std;

class VelocityVector
{
public:
    double speed;
    //angle relative to x-axis of Euclidean Plane
    double angle;

    VelocityVector()
    {
        speed = 0;
        angle = 0;
    }
    VelocityVector(double s, double a)
    {
        speed = s;
        angle = a;
        cout << "Vector created" << endl;
    }

    double getXComponent()
    {
        return speed * cos(angle);
    }

    double getYComponent()
    {
        return speed * sin(angle);
    }

    void assignSpeed(double s)
    {
        speed = s;
    }
    void assignAngle(double a)
    {
        angle = a;
    }
};