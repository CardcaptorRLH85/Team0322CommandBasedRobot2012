#include "RollOutBottomBelt.h"

RollOutBottomBelt::RollOutBottomBelt() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bottomBelt);
}

// Called just before this Command runs the first time
void RollOutBottomBelt::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RollOutBottomBelt::Execute() {
	bottomBelt->RollOut();
}

// Make this return true when this Command no longer needs to run execute()
bool RollOutBottomBelt::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RollOutBottomBelt::End() {
	bottomBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollOutBottomBelt::Interrupted() {
	End();
}
