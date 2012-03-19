#include "RunMiddleBeltDown.h"

RunMiddleBeltDown::RunMiddleBeltDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(middleBelt);
}

// Called just before this Command runs the first time
void RunMiddleBeltDown::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunMiddleBeltDown::Execute() {
	middleBelt->RollDown();
}

// Make this return true when this Command no longer needs to run execute()
bool RunMiddleBeltDown::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunMiddleBeltDown::End() {
	middleBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunMiddleBeltDown::Interrupted() {
	End();
}
