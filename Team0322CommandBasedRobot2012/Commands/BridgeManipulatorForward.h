#ifndef BRIDGE_MANIPULATOR_FORWARD_H
#define BRIDGE_MANIPULATOR_FORWARD_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class BridgeManipulatorForward: public CommandBase {
public:
	BridgeManipulatorForward();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
