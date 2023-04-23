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
};
