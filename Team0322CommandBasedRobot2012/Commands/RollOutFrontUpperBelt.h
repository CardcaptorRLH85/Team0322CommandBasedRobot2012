#ifndef ROLL_OUT_FRONT_UPPER_BELT_H
#define ROLL_OUT_FRONT_UPPER_BELT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RollOutFrontUpperBelt: public CommandBase {
public:
	RollOutFrontUpperBelt();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
