#include "ScoringRampDown.h"

ScoringRampDown::ScoringRampDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(levelOneScoringSystem);
}

// Called just before this Command runs the first time
void ScoringRampDown::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ScoringRampDown::Execute() {
	levelOneScoringSystem->MoveRampDown();
}

// Make this return true when this Command no longer needs to run execute()
bool ScoringRampDown::IsFinished() {
	return levelOneScoringSystem->RampDown();
}

// Called once after isFinished returns true
void ScoringRampDown::End() {
	levelOneScoringSystem->StopRamp();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ScoringRampDown::Interrupted() {
	End();
}
