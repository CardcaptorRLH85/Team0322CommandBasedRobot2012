#include "LevelOneScoringSystem.h"
#include "../Robotmap.h"

LevelOneScoringSystem::LevelOneScoringSystem() : Subsystem("LevelOneScoringSystem") {
	ScoringRampManipulator = new Victor(DIGITAL_MODULE_RIGHT,4);

	RampIsDown = new DigitalInput(DIGITAL_MODULE_LEFT,6);
	RampIsUp = new DigitalInput(DIGITAL_MODULE_RIGHT,6);
}
    
void LevelOneScoringSystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

	void LevelOneScoringSystem::MoveRampDown() {
		ScoringRampManipulator->Set(0.60);
	}
	void LevelOneScoringSystem::MoveRampUp() {
		ScoringRampManipulator->Set(-0.60);
	}
	void LevelOneScoringSystem::StopRamp() {
		ScoringRampManipulator->Set(0.0);
	}
	bool LevelOneScoringSystem::RampDown() {
		return RampIsDown;
	}
	bool LevelOneScoringSystem::RampUp() {
		return RampIsUp;
	}
