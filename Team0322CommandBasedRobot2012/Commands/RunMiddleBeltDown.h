#ifndef RUN_MIDDLE_BELT_DOWN_H
#define RUN_MIDDLE_BELT_DOWN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RunMiddleBeltDown: public CommandBase {
public:
	RunMiddleBeltDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
