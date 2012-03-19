#include "BridgeManipulator.h"
#include "../Robotmap.h"

BridgeManipulator::BridgeManipulator() : Subsystem("BridgeManipulator") {
	bridgeManipulatorMotor1 = new Victor(DIGITAL_MODULE_LEFT,3);
	bridgeManipulatorMotor2 = new Victor(DIGITAL_MODULE_RIGHT,3);
	
	forwardSwitch = new DigitalInput(DIGITAL_MODULE_LEFT,5);
	rearwardSwitch = new DigitalInput(DIGITAL_MODULE_RIGHT,5);
}
    
void BridgeManipulator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void BridgeManipulator::StopArm() {
	bridgeManipulatorMotor1->Set(0.0);
	bridgeManipulatorMotor2->Set(0.0);
}

void BridgeManipulator::ArmForward() {
	bridgeManipulatorMotor1->Set(-0.85);
	bridgeManipulatorMotor2->Set(0.85);
}

void BridgeManipulator::ArmRearward() {
	bridgeManipulatorMotor1->Set(0.85);
	bridgeManipulatorMotor2->Set(-0.85);
}

bool BridgeManipulator::ReturnArmForward() {
	if(forwardSwitch)
		return true;
	else
		return false;
}

bool BridgeManipulator::ReturnArmRearward() {
	if(rearwardSwitch)
		return true;
	else
		return false;
}

void BridgeManipulator::ManualArmControl(float power) {
	bridgeManipulatorMotor1->Set(power);
	bridgeManipulatorMotor2->Set(-(power));
}
