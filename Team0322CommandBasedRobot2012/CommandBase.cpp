#include "CommandBase.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
DriverStationLCDSystem* CommandBase::driverStationLCDSystem = NULL;
ChassisSensors* CommandBase::chassisSensors = NULL;
Chassis* CommandBase::chassis = NULL;
BridgeManipulator* CommandBase::bridgeManipulator = NULL;
BottomBelt* CommandBase::bottomBelt = NULL;
FrontUpperBelt* CommandBase::frontUpperBelt = NULL;
MiddleBelt* CommandBase::middleBelt = NULL;
Elevator* CommandBase::elevator = NULL;
TopFrontBelt* CommandBase::topFrontBelt = NULL;
TopRearBelt* CommandBase::topRearBelt = NULL;
LevelOneScoringSystem* CommandBase::levelOneScoringSystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	driverStationLCDSystem = new DriverStationLCDSystem();
	chassisSensors = new ChassisSensors();
	chassis = new Chassis();
	bridgeManipulator = new BridgeManipulator();
	bottomBelt = new BottomBelt();
	frontUpperBelt = new FrontUpperBelt();
	//middleBelt = new MiddleBelt();
	//elevator = new Elevator();
	//topFrontBelt = new TopFrontBelt();
	//topRearBelt = new TopRearBelt();
	//levelOneScoringSystem = new LevelOneScoringSystem();
	oi = new OI();
}
