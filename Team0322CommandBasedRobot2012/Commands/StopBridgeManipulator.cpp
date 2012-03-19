#include "StopBridgeManipulator.h"

StopBridgeManipulator::StopBridgeManipulator() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bridgeManipulator);
}

// Called just before this Command runs the first time
void StopBridgeManipulator::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void StopBridgeManipulator::Execute() {
	bridgeManipulator->StopArm();
}

// Make this return true when this Command no longer needs to run execute()
bool StopBridgeManipulator::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void StopBridgeManipulator::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopBridgeManipulator::Interrupted() {
}
