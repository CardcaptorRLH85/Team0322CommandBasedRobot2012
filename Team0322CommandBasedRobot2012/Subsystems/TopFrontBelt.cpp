#include "TopFrontBelt.h"
#include "../Robotmap.h"

TopFrontBelt::TopFrontBelt() : Subsystem("TopFrontBelt") {
	//bottomRoller = new Victor(DIGITAL_MODULE_LEFT,10);
	topRoller = new Victor(DIGITAL_MODULE_LEFT,10);
}
    
void TopFrontBelt::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void TopFrontBelt::RollUp() {
	//bottomRoller->Set(0.75);
	topRoller->Set(0.75);
}

void TopFrontBelt::RollDown() {
	//bottomRoller->Set(-0.75);
	topRoller->Set(-0.75);
}

void TopFrontBelt::StopRollers() {
	//bottomRoller->Set(0.0);
	topRoller->Set(0.0);
}
