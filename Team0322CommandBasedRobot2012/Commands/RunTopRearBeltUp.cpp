#include "RunTopRearBeltUp.h"

RunTopRearBeltUp::RunTopRearBeltUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(topRearBelt);
}

// Called just before this Command runs the first time
void RunTopRearBeltUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunTopRearBeltUp::Execute() {
	topRearBelt->RollUp();
}

// Make this return true when this Command no longer needs to run execute()
bool RunTopRearBeltUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunTopRearBeltUp::End() {
	topRearBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunTopRearBeltUp::Interrupted() {
	End();
}
