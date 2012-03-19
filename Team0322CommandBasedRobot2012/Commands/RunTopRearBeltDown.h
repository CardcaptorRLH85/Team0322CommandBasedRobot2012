#ifndef RUN_TOP_REAR_BELT_DOWN_H
#define RUN_TOP_REAR_BELT_DOWN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RunTopRearBeltDown: public CommandBase {
public:
	RunTopRearBeltDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
