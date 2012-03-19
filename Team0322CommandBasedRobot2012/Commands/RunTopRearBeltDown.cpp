#include "RunTopRearBeltDown.h"

RunTopRearBeltDown::RunTopRearBeltDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(topRearBelt);
}

// Called just before this Command runs the first time
void RunTopRearBeltDown::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunTopRearBeltDown::Execute() {
	topRearBelt->RollDown();
}

// Make this return true when this Command no longer needs to run execute()
bool RunTopRearBeltDown::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunTopRearBeltDown::End() {
	topRearBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunTopRearBeltDown::Interrupted() {
	End();
}
