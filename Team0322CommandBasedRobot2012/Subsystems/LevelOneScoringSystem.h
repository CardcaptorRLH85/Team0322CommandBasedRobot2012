#ifndef LEVEL_ONE_SCORING_SYSTEM_H
#define LEVEL_ONE_SCORING_SYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author 322Programmer
 */
class LevelOneScoringSystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *ScoringRampManipulator;
	DigitalInput *RampIsDown, *RampIsUp;
public:
	LevelOneScoringSystem();
	void InitDefaultCommand();
	void MoveRampDown();
	void MoveRampUp();
	void StopRamp();
	bool RampDown();
	bool RampUp();
};

#endif
