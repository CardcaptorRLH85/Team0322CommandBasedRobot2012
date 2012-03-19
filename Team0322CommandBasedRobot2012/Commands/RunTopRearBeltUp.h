#ifndef RUN_TOP_REAR_BELT_UP_H
#define RUN_TOP_REAR_BELT_UP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RunTopRearBeltUp: public CommandBase {
public:
	RunTopRearBeltUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
