#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/DriverStationLCDSystem.h"
#include "Subsystems/ChassisSensors.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Elevator.h"
#include "Subsystems/BridgeManipulator.h"
#include "Subsystems/BottomBelt.h"
#include "Subsystems/FrontUpperBelt.h"
#include "Subsystems/MiddleBelt.h"
#include "Subsystems/TopFrontBelt.h"
#include "Subsystems/TopRearBelt.h"
#include "Subsystems/LevelOneScoringSystem.h"
#include "OI.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static DriverStationLCDSystem *driverStationLCDSystem;
	static ChassisSensors *chassisSensors;
	static Chassis *chassis;
	static BridgeManipulator *bridgeManipulator;
	static BottomBelt *bottomBelt;
	static FrontUpperBelt *frontUpperBelt;
	static MiddleBelt *middleBelt;
	static Elevator *elevator;
	static TopFrontBelt *topFrontBelt;
	static TopRearBelt *topRearBelt;
	static LevelOneScoringSystem *levelOneScoringSystem;
	static OI *oi;
};

#endif
