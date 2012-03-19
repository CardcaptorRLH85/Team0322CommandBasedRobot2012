#ifndef RUN_TOP_FRONT_BELT_DOWN_H
#define RUN_TOP_FRONT_BELT_DOWN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RunTopFrontBeltDown: public CommandBase {
public:
	RunTopFrontBeltDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
