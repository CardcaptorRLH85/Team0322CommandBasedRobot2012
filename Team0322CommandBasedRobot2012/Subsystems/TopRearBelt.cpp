#include "TopRearBelt.h"
#include "../Robotmap.h"

TopRearBelt::TopRearBelt() : Subsystem("TopRearBelt") {
	//bottomRoller = new Victor(DIGITAL_MODULE_LEFT,10);
	topRoller = new Victor(DIGITAL_MODULE_RIGHT,10);
}
    
void TopRearBelt::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void TopRearBelt::RollUp() {
	//bottomRoller->Set(0.75);
	topRoller->Set(0.75);
}

void TopRearBelt::RollDown() {
	//bottomRoller->Set(-0.75);
	topRoller->Set(-0.75);
}

void TopRearBelt::StopRollers() {
	//bottomRoller->Set(0.0);
	topRoller->Set(0.0);
}
