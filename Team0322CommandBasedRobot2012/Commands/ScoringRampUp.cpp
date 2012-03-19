#include "ScoringRampUp.h"

ScoringRampUp::ScoringRampUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(levelOneScoringSystem);
}

// Called just before this Command runs the first time
void ScoringRampUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ScoringRampUp::Execute() {
	levelOneScoringSystem->MoveRampUp();
}

// Make this return true when this Command no longer needs to run execute()
bool ScoringRampUp::IsFinished() {
	return levelOneScoringSystem->RampUp();
}

// Called once after isFinished returns true
void ScoringRampUp::End() {
	levelOneScoringSystem->StopRamp();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ScoringRampUp::Interrupted() {
	End();
}
