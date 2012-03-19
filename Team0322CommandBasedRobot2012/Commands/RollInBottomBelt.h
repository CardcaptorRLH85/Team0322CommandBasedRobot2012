#ifndef ROLL_IN_BOTTOM_BELT_H
#define ROLL_IN_BOTTOM_BELT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RollInBottomBelt: public CommandBase {
public:
	RollInBottomBelt();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
