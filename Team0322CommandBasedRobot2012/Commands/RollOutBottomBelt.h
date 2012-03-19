#ifndef ROLL_OUT_BOTTOM_BELT_H
#define ROLL_OUT_BOTTOM_BELT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RollOutBottomBelt: public CommandBase {
public:
	RollOutBottomBelt();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
