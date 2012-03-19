#ifndef RUN_TOP_FRONT_BELT_UP_H
#define RUN_TOP_FRONT_BELT_UP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RunTopFrontBeltUp: public CommandBase {
public:
	RunTopFrontBeltUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
