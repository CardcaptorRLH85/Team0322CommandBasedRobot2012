#include "AutonSelector.h"
#include "AutonDoNothing.h"
#include "AutonDropBridge.h"
#include "AutonReleaseBallsDropBridgeTakeAndReleaseBalls.h"
#include "AutonMoveForwardAndScore.h"
#include "AutonReleaseBallsAndDropBridge.h"

AutonSelector::AutonSelector() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(autonomusModeSwitches);
}

// Called just before this Command runs the first time
void AutonSelector::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AutonSelector::Execute() {
	mode = autonomusModeSwitches->GetMode();
	switch(mode)
	{
		case 0:
			autonCommand = new AutonDoNothing();
			break;
		
		case 1:
			autonCommand = new AutonDropBridge();
			break;

		case 2:
			autonCommand = new AutonReleaseBallsDropBridgeTakeAndReleaseBalls();
			break;
			
		case 3:
			autonCommand = new AutonMoveForwardAndScore();
			break;
			
		case 4:
			autonCommand = new AutonReleaseBallsAndDropBridge();
			break;
			
		default:
			autonCommand = new AutonDoNothing();
			return;
	}
	autonCommand->Run();
}

// Make this return true when this Command no longer needs to run execute()
bool AutonSelector::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AutonSelector::End() {
	autonCommand->Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonSelector::Interrupted() {
	End();
}
