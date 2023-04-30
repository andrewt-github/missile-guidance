#include <iostream>
#include <cmath>

using namespace std;

class Vector
{
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

private:
    static const double pi = 3.1415926535897932384626433832795028841971693993751058209;
};

int main()
{
    Vector vector1(2, 3, 5);
    cout << "X: " << vector1.x << endl << "Y: " << vector1.y << endl << "Z: " << vector1.z << endl;
    cout << "Magnitude is: " << vector1.vectorMagnitude << endl;

    cout << "Angles are: \n" << "X: " << vector1.getXAngle() << endl << "Y: " << vector1.getYAngle() << endl << "Z: " << vector1.getZAngle() << endl;
}