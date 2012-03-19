#include "ExtendMiddleBeltBottomRoller.h"

ExtendMiddleBeltBottomRoller::ExtendMiddleBeltBottomRoller() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(middleBelt);
}

// Called just before this Command runs the first time
void ExtendMiddleBeltBottomRoller::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ExtendMiddleBeltBottomRoller::Execute() {
	middleBelt->MoveBottomRoller(0);
}

// Make this return true when this Command no longer needs to run execute()
bool ExtendMiddleBeltBottomRoller::IsFinished() {
	return middleBelt->BottomRollerExtended();
}

// Called once after isFinished returns true
void ExtendMiddleBeltBottomRoller::End() {
	middleBelt->MoveBottomRoller(2);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExtendMiddleBeltBottomRoller::Interrupted() {
	End();
}
