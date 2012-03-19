#include "OI.h"
#include "Commands/BrakeControl.h"
#include "Commands/PrecisionDrive.h"
#include "Commands/BridgeManipulatorForward.h"
#include "Commands/BridgeManipulatorRearward.h"
#include "Commands/RollInFrontBelts.h"
#include "Commands/RollOutFrontBelts.h"
/*#include "Commands/RollUpMiddleSection.h"
#include "Commands/RollDownMiddleSection.h"
#include "Commands/RaiseElevator.h"
#include "Commands/LowerElevator.h"
#include "Commands/RunTopSectionOut.h"
#include "Commands/RunTopSectionDown.h"
#include "Commands/RetractMiddleBeltBottomRoller.h"
#include "Commands/ExtendMiddleBeltBottomRoller.h"
#include "Commands/ScoringRampDown.h"
#include "Commands/ScoringRampUp.h"*/

OI::OI() {
	// Process operator interface input here.
	
	// Create the two Joystick objects
	driveStick = new Joystick(1, NUMAXIS, NUMBUTTONS);
	manipulatorStick = new Joystick(2, NUMAXIS, NUMBUTTONS);
	
	// Create the Brake System controls
	brake = new JoystickButton(driveStick, 6);
	brake->WhileHeld(new BrakeControl());
	
	// Create the Precision Drive System controls
	precisionDriveButton = new JoystickButton(driveStick, 1);
	precisionDriveButton->WhileHeld(new PrecisionDrive());
	
	// Create the Bridge Manipulator controls
	bridgeManipulatorFwd = new JoystickButton(manipulatorStick, 1);
	bridgeManipulatorFwd->WhileHeld(new BridgeManipulatorForward());
	bridgeManipulatorRwd = new JoystickButton(manipulatorStick, 4);
	bridgeManipulatorRwd->WhileHeld(new BridgeManipulatorRearward());
	
	// Create the Bottom Roller Section Controls
	section1In = new JoystickButton(manipulatorStick, 2);
	section1In->WhileHeld(new RollInFrontBelts());
	section1Out = new JoystickButton(manipulatorStick, 3);
	section1Out->WhileHeld(new RollOutFrontBelts());
	/*
	// Create the Middle Roller Section Controls	
	section2Up = new JoystickButton(manipulatorStick, 3);
	section2Up->WhileHeld(new RollUpMiddleSection());
	section2Down = new JoystickButton(manipulatorStick, 4);
	section2Down->WhileHeld(new RollDownMiddleSection());
	
	// Create the Controls for the Middle Section Mover
	retractMiddleSection = new InternalButton(); 
	extendMiddleSection = new InternalButton();
	
	if(manipulatorStick->GetRawAxis(5)>0.25) {
		retractMiddleSection->SetPressed(true);
		extendMiddleSection->SetPressed(false);
	} else if(manipulatorStick->GetRawAxis(5)<-0.25) {
		extendMiddleSection->SetPressed(true);
		retractMiddleSection->SetPressed(false);
	} else {
		retractMiddleSection->SetPressed(false);
		extendMiddleSection->SetPressed(false);
	}
	
	retractMiddleSection->WhenPressed(new RetractMiddleBeltBottomRoller());
	extendMiddleSection->WhenPressed(new ExtendMiddleBeltBottomRoller());
		
	// Create the Elevator Controls
	elevatorUp = new JoystickButton(manipulatorStick, 5);
	elevatorUp->WhenPressed(new RaiseElevator());
	elevatorDown = new JoystickButton(manipulatorStick, 6);
	elevatorDown->WhenPressed(new LowerElevator());
	
	// Create the Top Roller Section Controls
 	section3Out = new JoystickButton(manipulatorStick, 7);
	section3Out->WhileHeld(new RunTopSectionOut());
	section3Down = new JoystickButton(manipulatorStick, 8);
	section3Down->WhileHeld(new RunTopSectionDown());
	*/
}

Joystick* OI::getDriveStick() {
	return driveStick;
}

Joystick* OI::getManipulatorStick() {
	return manipulatorStick;
}
