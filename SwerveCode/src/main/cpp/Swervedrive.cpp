#include "Swervedrive.hpp"

void Swervedrive::Drive(double x1, double y1, double x2) {
    R = sqrt((L * L) + (W * W)); // pythagorean theorem method for hypotenuse length
    y1 *= -1;

    A = x1 - x2 * (L / R);
    B = x1 + x2 * (L / R);
    C = y1 - x2 * (W / R);
    D = y1 + x2 * (W / R);

    BACK_RIGHT_SPEED = sqrt((A * A) + (D * D)); // pythagorean theorem method for hypotenuse length
    BACK_LEFT_SPEED = sqrt((A * A) + (C * C)); // pythagorean theorem method for hypotenuse length
    FRONT_RIGHT_SPEED = sqrt((B * B) + (D * D)); // pythagorean theorem method for hypotenuse length
    FRONT_LEFT_SPEED = sqrt((B * B) + (C * C)); // pythagorean theorem method for hypotenuse length

    BACK_RIGHT_ANGLE = atan2(A, D) / M_PI;
    BACK_LEFT_ANGLE = atan2(A, C) / M_PI;
    FRONT_RIGHT_ANGLE = atan2(B, D) / M_PI;
    FRONT_LEFT_ANGLE = atan2(B, C) / M_PI;
}
