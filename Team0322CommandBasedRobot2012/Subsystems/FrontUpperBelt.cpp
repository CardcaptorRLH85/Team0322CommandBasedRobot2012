#include "FrontUpperBelt.h"
#include "../Robotmap.h"

FrontUpperBelt::FrontUpperBelt() : Subsystem("FrontUpperBelt") {
	frontRoller = new Victor(DIGITAL_MODULE_LEFT,5);
	//topRoller = new Victor(DIGITAL_MODULE_RIGHT,5);
}
    
void FrontUpperBelt::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void FrontUpperBelt::RollIn() {
	frontRoller->Set(1.0);
	//topRoller->Set(1.0);
}

void FrontUpperBelt::RollOut() {
	frontRoller->Set(-1.0);
	//topRoller->Set(-1.0);
}

void FrontUpperBelt::StopRollers() {
	frontRoller->Set(0.0);
	//topRoller->Set(0.0);
}
