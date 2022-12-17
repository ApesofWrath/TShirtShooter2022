#include <iostream>
#include <cmath>
#include <ctre/phoenix/motorcontrol/can/TalonFX.h>

class Wheeldrive {
    private:
    const double MAX_VOLTAGE;

    public:
    ctre::phoenix::motorcontrol::can::TalonFX *Front_Right_Speed;
    ctre::phoenix::motorcontrol::can::TalonFX *Front_Right_Angle;
    ctre::phoenix::motorcontrol::can::TalonFX *Front_Left_Speed;
    ctre::phoenix::motorcontrol::can::TalonFX *Front_Left_Angle;
    ctre::phoenix::motorcontrol::can::TalonFX *Back_Right_Speed;
    ctre::phoenix::motorcontrol::can::TalonFX *Back_Right_Angle;
    ctre::phoenix::motorcontrol::can::TalonFX *Back_Left_Speed;
    ctre::phoenix::motorcontrol::can::TalonFX *Back_Left_Angle;

    void Drive(double speed, double angle);
};