#ifndef ELEVATOR_H
#define ELEVATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class Elevator: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *leftElevatorMotor, *rightElevatorMotor;
	DigitalInput *elevatorTopSensor, *elevatorBottomSensor;
public:
	Elevator();
	void InitDefaultCommand();
	void RaiseElevator();
	void LowerElevator();
	void StopElevator();
	bool ElevatorRaised();
	bool ElevatorLowered();
};

#endif
