#include "RunMiddleBeltUp.h"

RunMiddleBeltUp::RunMiddleBeltUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(middleBelt);
}

// Called just before this Command runs the first time
void RunMiddleBeltUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunMiddleBeltUp::Execute() {
	middleBelt->RollUp();
}

// Make this return true when this Command no longer needs to run execute()
bool RunMiddleBeltUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunMiddleBeltUp::End() {
	middleBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunMiddleBeltUp::Interrupted() {
	End();
}
