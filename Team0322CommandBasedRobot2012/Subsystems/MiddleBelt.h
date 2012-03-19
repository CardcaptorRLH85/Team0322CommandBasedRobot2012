#ifndef MIDDLE_BELT_H
#define MIDDLE_BELT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class MiddleBelt: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *bottomRoller, *topRoller, *bottomRollerMover;
	DigitalInput *rollerRetracted, *rollerExtended;
public:
	MiddleBelt();
	void InitDefaultCommand();
	void RollUp();
	void RollDown();
	void StopRollers();
	void MoveBottomRoller(int);
	bool BottomRollerRetracted();
	bool BottomRollerExtended();
};

#endif
