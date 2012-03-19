#include "RetractMiddleBeltBottomRoller.h"

RetractMiddleBeltBottomRoller::RetractMiddleBeltBottomRoller() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(middleBelt);
}

// Called just before this Command runs the first time
void RetractMiddleBeltBottomRoller::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RetractMiddleBeltBottomRoller::Execute() {
	middleBelt->MoveBottomRoller(1);
}

// Make this return true when this Command no longer needs to run execute()
bool RetractMiddleBeltBottomRoller::IsFinished() {
	return middleBelt->BottomRollerRetracted();
}

// Called once after isFinished returns true
void RetractMiddleBeltBottomRoller::End() {
	middleBelt->MoveBottomRoller(2);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RetractMiddleBeltBottomRoller::Interrupted() {
	End();
}
