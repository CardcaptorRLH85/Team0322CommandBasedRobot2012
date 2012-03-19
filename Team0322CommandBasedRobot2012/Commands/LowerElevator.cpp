#include "LowerElevator.h"

LowerElevator::LowerElevator() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(elevator);
}

// Called just before this Command runs the first time
void LowerElevator::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LowerElevator::Execute() {
	elevator->LowerElevator();
}

// Make this return true when this Command no longer needs to run execute()
bool LowerElevator::IsFinished() {
	return elevator->ElevatorLowered();
}

// Called once after isFinished returns true
void LowerElevator::End() {
	elevator->StopElevator();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LowerElevator::Interrupted() {
	End();
}
