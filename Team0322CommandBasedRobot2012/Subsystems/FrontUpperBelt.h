#ifndef FRONT_UPPER_BELT_H
#define FRONT_UPPER_BELT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class FrontUpperBelt: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *frontRoller, *topRoller;
public:
	FrontUpperBelt();
	void InitDefaultCommand();
	void RollIn();
	void RollOut();
	void StopRollers();
};

#endif
