#ifndef STOPBRIDGEMANIPULATOR_H
#define STOPBRIDGEMANIPULATOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class StopBridgeManipulator: public CommandBase {
public:
	StopBridgeManipulator();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
