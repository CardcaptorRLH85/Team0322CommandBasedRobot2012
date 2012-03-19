#include "RollInFrontUpperBelt.h"

RollInFrontUpperBelt::RollInFrontUpperBelt() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(frontUpperBelt);
}

// Called just before this Command runs the first time
void RollInFrontUpperBelt::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RollInFrontUpperBelt::Execute() {
	frontUpperBelt->RollIn();
}

// Make this return true when this Command no longer needs to run execute()
bool RollInFrontUpperBelt::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RollInFrontUpperBelt::End() {
	frontUpperBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollInFrontUpperBelt::Interrupted() {
	End();
}
