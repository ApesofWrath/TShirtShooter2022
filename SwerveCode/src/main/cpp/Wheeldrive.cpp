#include "Wheeldrive.hpp"
const double MAX_VOLTAGE = 4; // maximum voltage to limit the speed of the drive train

void Wheeldrive::Drive(double speed, double angle) {
    Front_Right_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    Front_Left_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    Back_Right_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    Back_Left_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    // above lines set the motors to percent-output speed controll (take the speed as any given value between 0 and 1)

    double setpoint = angle * (MAX_VOLTAGE * 0.5) + (MAX_VOLTAGE * 0.5); // calculate max voltage for angle motors (mind order of opps)
    if (setpoint < 0) {
        setpoint = setpoint + MAX_VOLTAGE; // if it's over, subtract it
    }
    if (setpoint > MAX_VOLTAGE) {
        setpoint = setpoint - MAX_VOLTAGE;  // it it's under, add it
    }
};