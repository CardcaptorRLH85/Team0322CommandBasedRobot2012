#include "RaiseElevator.h"

RaiseElevator::RaiseElevator() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(elevator);
}

// Called just before this Command runs the first time
void RaiseElevator::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RaiseElevator::Execute() {
	elevator->RaiseElevator();
}

// Make this return true when this Command no longer needs to run execute()
bool RaiseElevator::IsFinished() {
	return elevator->ElevatorRaised();
}

// Called once after isFinished returns true
void RaiseElevator::End() {
	elevator->StopElevator();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RaiseElevator::Interrupted() {
	End();
}
