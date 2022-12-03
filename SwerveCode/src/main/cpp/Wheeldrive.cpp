#include "Wheeldrive.hpp"
const double MAX_VOLTAGE = 4;

void Wheeldrive::Drive(double speed, double angle) {
    Front_Right_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    Front_Left_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    Back_Right_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);
    Back_Left_Speed->ctre::phoenix::motorcontrol::can::TalonFX::Set(ctre::phoenix::motorcontrol::TalonFXControlMode::PercentOutput, speed);

    double setpoint = angle * (MAX_VOLTAGE * 0.5) + (MAX_VOLTAGE * 0.5);
    if (setpoint < 0) {
        setpoint = MAX_VOLTAGE + setpoint;
    }
    if (setpoint > MAX_VOLTAGE) {
        setpoint = setpoint - MAX_VOLTAGE;
    }
};