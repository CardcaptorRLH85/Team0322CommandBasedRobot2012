#include "RunTopFrontBeltUp.h"

RunTopFrontBeltUp::RunTopFrontBeltUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(topFrontBelt);
}

// Called just before this Command runs the first time
void RunTopFrontBeltUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunTopFrontBeltUp::Execute() {
	topFrontBelt->RollUp();
}

// Make this return true when this Command no longer needs to run execute()
bool RunTopFrontBeltUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunTopFrontBeltUp::End() {
	topFrontBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunTopFrontBeltUp::Interrupted() {
	End();
}
