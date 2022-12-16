#include "Swervedrive.hpp"
// code copied from somewhere else
void Swervedrive::Drive(double fwd, double trn, double stfe) { // find angle and speed values for swere talons (motors on modules) from controller inputs (forward/backward, turn, strafe)
    R = sqrt((L * L) + (W * W)); // pythagorean theorem method for hypotenuse length (mystery code)
    trn *= -1; // invert turn polarity

    A = fwd - stfe * (L / R); // Calculation used for motor
    B = fwd + stfe * (L / R); // Calculation used for other motor
    C = trn - stfe * (W / R); // Calculation used for another motor
    D = trn + stfe * (W / R); // Calculation used for yet another motor

    BACK_RIGHT_SPEED = sqrt((A * A) + (D * D)); // PTMfHL, speed of indicated speed motor
    BACK_LEFT_SPEED = sqrt((A * A) + (C * C)); // PTMfHL, speed of indicated speed motor
    FRONT_RIGHT_SPEED = sqrt((B * B) + (D * D)); // PTMfHL, speed of indicated speed motor
    FRONT_LEFT_SPEED = sqrt((B * B) + (C * C)); // PTMfHL, speed of indicated speed motor

    BACK_RIGHT_ANGLE = atan2(A, D) / M_PI; // position of indicated angle motor
    BACK_LEFT_ANGLE = atan2(A, C) / M_PI; // position of indicated angle motor
    FRONT_RIGHT_ANGLE = atan2(B, D) / M_PI; // position of indicated angle motor
    FRONT_LEFT_ANGLE = atan2(B, C) / M_PI; // position of indicated angle motor
}
