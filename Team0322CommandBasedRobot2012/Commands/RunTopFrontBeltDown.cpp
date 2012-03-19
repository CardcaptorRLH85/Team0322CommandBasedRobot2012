#include "RunTopFrontBeltDown.h"

RunTopFrontBeltDown::RunTopFrontBeltDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(topFrontBelt);
}

// Called just before this Command runs the first time
void RunTopFrontBeltDown::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunTopFrontBeltDown::Execute() {
	topFrontBelt->RollDown();
}

// Make this return true when this Command no longer needs to run execute()
bool RunTopFrontBeltDown::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunTopFrontBeltDown::End() {
	topFrontBelt->StopRollers();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunTopFrontBeltDown::Interrupted() {
	End();
}
