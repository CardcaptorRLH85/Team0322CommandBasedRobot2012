#ifndef BOTTOM_BELT_H
#define BOTTOM_BELT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class BottomBelt: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *frontRoller, *topRoller;
public:
	BottomBelt();
	void InitDefaultCommand();
	void RollIn();
	void RollOut();
	void StopRollers();
};

#endif
