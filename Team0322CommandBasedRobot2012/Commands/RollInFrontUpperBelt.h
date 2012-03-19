#ifndef ROLL_IN_FRONT_UPPER_BELT_H
#define ROLL_IN_FRONT_UPPER_BELT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RollInFrontUpperBelt: public CommandBase {
public:
	RollInFrontUpperBelt();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
