#include "AutonReleaseBallsAndDropBridge.h"
#include "BridgeManipulatorForward.h"
#include "BridgeManipulatorRearward.h"
#include "DriveForward.h"
#include "DriveBackwards.h"

AutonReleaseBallsAndDropBridge::AutonReleaseBallsAndDropBridge() {
        // Add Commands here:
        // e.g. AddSequential(new Command1());
        //      AddSequential(new Command2());
        // these will run in order.

        // To run multiple commands at the same time,
        // use AddParallel()
        // e.g. AddParallel(new Command1());
        //      AddSequential(new Command2());
        // Command1 and Command2 will run in parallel.

        // A command group will require all of the subsystems that each member
        // would require.
        // e.g. if Command1 requires chassis, and Command2 requires arm,
        // a CommandGroup containing them would require both the chassis and the
        // arm.
	AddSequential(new WaitCommand(8.0));
	AddSequential(new BridgeManipulatorForward());
	AddSequential(new DriveForward());
	AddSequential(new BridgeManipulatorForward());
	AddParallel(new BridgeManipulatorRearward());
	AddSequential(new DriveBackwards());
	AddSequential(new BridgeManipulatorForward());
	AddSequential(new WaitCommand(1.0));
	AddSequential(new BridgeManipulatorRearward());
}
