#include "MiddleBelt.h"
#include "../Robotmap.h"

MiddleBelt::MiddleBelt() : Subsystem("MiddleBelt") {
	bottomRoller = new Victor(DIGITAL_MODULE_LEFT,7);
	topRoller = new Victor(DIGITAL_MODULE_RIGHT,7);
	bottomRollerMover = new Victor(DIGITAL_MODULE_LEFT,8);
	
	rollerRetracted = new DigitalInput(DIGITAL_MODULE_LEFT,7);
	rollerExtended = new DigitalInput(DIGITAL_MODULE_RIGHT,7);
}
    
void MiddleBelt::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void MiddleBelt::RollUp() {
	bottomRoller->Set(0.75);
	topRoller->Set(0.75);
}

void MiddleBelt::RollDown() {
	bottomRoller->Set(-0.75);
	topRoller->Set(-0.75);
}

void MiddleBelt::StopRollers() {
	bottomRoller->Set(0.0);
	topRoller->Set(0.0);
}

void MiddleBelt::MoveBottomRoller(int direction) {
	switch(direction) {
		case 0:
			if(rollerExtended) {
				bottomRollerMover->Set(0.0);
			}
			else {
				bottomRollerMover->Set(-0.5);
			}
			break;
		
		case 1:
			if(rollerRetracted) {
				bottomRollerMover->Set(0.0);
			}
			else {
				bottomRollerMover->Set(0.5);
			}
			break;
		
		case 2:
		default:
			bottomRollerMover->Set(0.0);
			break;
	}
}

bool MiddleBelt::BottomRollerRetracted() {
	return rollerRetracted;
}

bool MiddleBelt::BottomRollerExtended() {
	return rollerExtended;
}
