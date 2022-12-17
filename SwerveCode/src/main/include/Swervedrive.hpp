#include <iostream>
#include <cmath>

class Swervedrive {
    public:
    void Drive(double x1, double y1, double x2);

    const double L = 0;
    const double W = 0;

    double R;

    double A;
    double B;
    double C;
    double D;

    double BACK_RIGHT_SPEED;
    double BACK_LEFT_SPEED;
    double FRONT_RIGHT_SPEED;
    double FRONT_LEFT_SPEED;

    double BACK_RIGHT_ANGLE;
    double BACK_LEFT_ANGLE;
    double FRONT_RIGHT_ANGLE;
    double FRONT_LEFT_ANGLE;
};