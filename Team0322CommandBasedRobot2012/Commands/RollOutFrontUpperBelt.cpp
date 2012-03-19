#include "RollOutFrontUpperBelt.h"

RollOutFrontUpperBelt::RollOutFrontUpperBelt() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(frontUpperBelt);
}

// Called just before this Command runs the first time
void RollOutFrontUpperBelt::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RollOutFrontUpperBelt::Execute() {
	frontUpperBelt->RollOut();
}

// Make this return true when this Command no longer needs to run execute()
bool RollOutFrontUpperBelt::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RollOutFrontUpperBelt::End() {
	frontUpperBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollOutFrontUpperBelt::Interrupted() {
	End();
}
