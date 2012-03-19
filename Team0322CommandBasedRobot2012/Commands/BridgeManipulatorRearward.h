#ifndef BRIDGE_MANIPULATOR_REARWARD_H
#define BRIDGE_MANIPULATOR_REARWARD_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class BridgeManipulatorRearward: public CommandBase {
public:
	BridgeManipulatorRearward();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
