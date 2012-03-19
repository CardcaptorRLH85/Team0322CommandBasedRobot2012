#include "RollInBottomBelt.h"

RollInBottomBelt::RollInBottomBelt() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bottomBelt);
}

// Called just before this Command runs the first time
void RollInBottomBelt::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RollInBottomBelt::Execute() {
	bottomBelt->RollIn();
}

// Make this return true when this Command no longer needs to run execute()
bool RollInBottomBelt::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RollInBottomBelt::End() {
	bottomBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollInBottomBelt::Interrupted() {
	End();
}
