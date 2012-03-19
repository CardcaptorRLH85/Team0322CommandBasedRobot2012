#ifndef RUN_MIDDLE_BELT_UP_H
#define RUN_MIDDLE_BELT_UP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RunMiddleBeltUp: public CommandBase {
public:
	RunMiddleBeltUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
