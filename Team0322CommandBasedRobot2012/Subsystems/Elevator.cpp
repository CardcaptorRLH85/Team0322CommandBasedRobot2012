#include "Elevator.h"
#include "../Robotmap.h"

Elevator::Elevator() : Subsystem("Elevator") {
	leftElevatorMotor = new Victor(DIGITAL_MODULE_LEFT,9);
	rightElevatorMotor = new Victor(DIGITAL_MODULE_RIGHT,9);
	
	elevatorTopSensor = new DigitalInput(DIGITAL_MODULE_LEFT,5);
	elevatorBottomSensor = new DigitalInput(DIGITAL_MODULE_RIGHT,5);
}
    
void Elevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Elevator::RaiseElevator() {
	if(elevatorTopSensor) {
		//leftElevatorMotor->Set(0.0);
		rightElevatorMotor->Set(0.0);
	}
	else {
		//leftElevatorMotor->Set(0.75);
		rightElevatorMotor->Set(0.75);
	}
}

void Elevator::LowerElevator() {
	if(elevatorBottomSensor) {
		//leftElevatorMotor->Set(0.0);
		rightElevatorMotor->Set(0.0);
	}
	else {
		//leftElevatorMotor->Set(0.75);
		rightElevatorMotor->Set(0.75);
	}
}

void Elevator::StopElevator() {
	//leftElevatorMotor->Set(0.0);
	rightElevatorMotor->Set(0.0);
}

bool Elevator::ElevatorRaised() {
	return elevatorTopSensor;
}

bool Elevator::ElevatorLowered() {
	return elevatorBottomSensor;
}
