#ifndef TOP_REAR_BELT_H
#define TOP_REAR_BELT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class TopRearBelt: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *bottomRoller, *topRoller;
public:
	TopRearBelt();
	void InitDefaultCommand();
	void RollUp();
	void RollDown();
	void StopRollers();
};

#endif
