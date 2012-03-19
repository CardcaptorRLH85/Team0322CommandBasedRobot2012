#include "BottomBelt.h"
#include "../Robotmap.h"

BottomBelt::BottomBelt() : Subsystem("BottomBelt") {
	//frontRoller = new Victor(DIGITAL_MODULE_LEFT,6);
	topRoller = new Victor(DIGITAL_MODULE_RIGHT,6);
}
    
void BottomBelt::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void BottomBelt::RollIn() {
	//frontRoller->Set(1.0);
	topRoller->Set(1.0);
}

void BottomBelt::RollOut() {
	//frontRoller->Set(-1.0);
	topRoller->Set(-1.0);
}

void BottomBelt::StopRollers() {
	//frontRoller->Set(0.0);
	topRoller->Set(0.0);
}
