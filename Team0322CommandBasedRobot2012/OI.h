#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	static const int NUMAXIS = 5;
	static const int NUMBUTTONS = 10;
	
	Joystick *driveStick, *manipulatorStick;
	
	JoystickButton *brake, *precisionDriveButton;
	JoystickButton *section1In, *section1Out;
	JoystickButton *section2Up, *section2Down;
	JoystickButton *elevatorUp, *elevatorDown;
	InternalButton *retractMiddleSection, *extendMiddleSection;
	JoystickButton *section3Out, *section3Down;
	JoystickButton *bridgeManipulatorFwd, *bridgeManipulatorRwd;
	
public:
	OI();
	Joystick* getDriveStick();
	Joystick* getManipulatorStick();
};

#endif
