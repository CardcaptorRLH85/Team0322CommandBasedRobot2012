#include "BridgeManipulatorForward.h"

BridgeManipulatorForward::BridgeManipulatorForward() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bridgeManipulator);
}

// Called just before this Command runs the first time
void BridgeManipulatorForward::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BridgeManipulatorForward::Execute() {
	bridgeManipulator->ArmForward();
}

// Make this return true when this Command no longer needs to run execute()
bool BridgeManipulatorForward::IsFinished() {
	//return bridgeManipulator->ReturnArmForward();
	return false;
}

// Called once after isFinished returns true
void BridgeManipulatorForward::End() {
	bridgeManipulator->StopArm();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BridgeManipulatorForward::Interrupted() {
	End();
}
