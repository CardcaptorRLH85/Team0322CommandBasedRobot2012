#ifndef BRIDGE_MANIPULATOR_H
#define BRIDGE_MANIPULATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class BridgeManipulator: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor  *bridgeManipulatorMotor1, *bridgeManipulatorMotor2;
	DigitalInput *forwardSwitch, *rearwardSwitch;
public:
	BridgeManipulator();
	void InitDefaultCommand();
	void StopArm();
	void ArmForward();
	void ArmRearward();
	bool ReturnArmForward();
	bool ReturnArmRearward();
	void ManualArmControl(float);
};

#endif
