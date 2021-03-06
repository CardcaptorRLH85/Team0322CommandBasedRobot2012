#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithJoystick.h"
#include "RobotDrive.h"

Chassis::Chassis() : Subsystem("Chassis") {
	
	frontLeftMotor = new Victor(DIGITAL_MODULE_LEFT,1);
	rearLeftMotor = new Jaguar(DIGITAL_MODULE_LEFT,2);
	frontRightMotor = new Victor(DIGITAL_MODULE_RIGHT,1);
	rearRightMotor = new Jaguar(DIGITAL_MODULE_RIGHT,2);
	robotDrive = new RobotDrive(frontLeftMotor, rearLeftMotor, frontRightMotor, rearRightMotor);
	robotDrive->SetInvertedMotor(robotDrive->kFrontLeftMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kFrontRightMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kRearLeftMotor, true);
	robotDrive->SetInvertedMotor(robotDrive->kRearRightMotor, true);
	robotDrive->SetSafetyEnabled(false);
	
	// Create the DigitalOutput objects for the brake/coast header control system
	leftFrontBrake = new DigitalOutput(DIGITAL_MODULE_LEFT,3);
	leftRearBrake = new DigitalOutput(DIGITAL_MODULE_LEFT,4);
	rightFrontBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,3);
	rightRearBrake = new DigitalOutput(DIGITAL_MODULE_RIGHT,4);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::driveWithJoystick(Joystick *stick) {
	robotDrive->TankDrive(stick, 2, stick, 4);
}

void Chassis::autoDriveSystem(float left, float right) {
	robotDrive->TankDrive(left, right);
}

void Chassis::precisionDriveSystem(Joystick *stick) {
	robotDrive->ArcadeDrive(stick->GetRawAxis(2) / 4, stick->GetRawAxis(1) / 4, false);
}

void Chassis::brake() {
	leftFrontBrake->Set(1);
	rightFrontBrake->Set(1);
	leftRearBrake->Set(1);
	rightRearBrake->Set(1);
}

void Chassis::coast() {
	leftFrontBrake->Set(0);
	rightFrontBrake->Set(0);
	leftRearBrake->Set(0);
	rightRearBrake->Set(0);
}
