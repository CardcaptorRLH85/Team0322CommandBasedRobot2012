#include "BridgeManipulatorRearward.h"

BridgeManipulatorRearward::BridgeManipulatorRearward() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(bridgeManipulator);
}

// Called just before this Command runs the first time
void BridgeManipulatorRearward::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BridgeManipulatorRearward::Execute() {
	bridgeManipulator->ArmRearward();
}

// Make this return true when this Command no longer needs to run execute()
bool BridgeManipulatorRearward::IsFinished() {
	//return bridgeManipulator->ReturnArmRearward();
	return false;
}

// Called once after isFinished returns true
void BridgeManipulatorRearward::End() {
	bridgeManipulator->StopArm();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BridgeManipulatorRearward::Interrupted() {
	End();
}
