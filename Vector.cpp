#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
    double pi = 3.141592653589793;

public:
    float x;
    float y;
    float z;

    float vectorMagnitude;

    Vector(float xC, float yC, float zC)
    {
        x = xC;
        y = yC;
        z = zC;

        vectorMagnitude = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }

    float getXAngle()
    {
        return acos((x / vectorMagnitude)) * (180 / pi);
    }
    float getYAngle()
    {
        return acos((y / vectorMagnitude)) * (180 / pi);
    }
    float getZAngle()
    {
        return acos((z / vectorMagnitude)) * (180 / pi);
    }
};

int main()
{
    cout << "-----------------------------" << endl;
    

    Vector vector1(2, 3, 5);
    cout << "X: " << vector1.x << endl << "Y: " << vector1.y << endl << "Z: " << vector1.z << endl;
    cout << "Magnitude is: " << vector1.vectorMagnitude << "\n" << endl;

    cout << "Angles are: " << endl << " X: " << vector1.getXAngle() << endl << " Y: " << vector1.getYAngle() << endl << " Z: " << vector1.getZAngle() << endl;





    cout << "-----------------------------" << endl;
}