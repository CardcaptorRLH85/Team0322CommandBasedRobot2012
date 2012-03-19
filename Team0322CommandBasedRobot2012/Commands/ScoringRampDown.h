#ifndef SCORINGRAMPDOWN_H
#define SCORINGRAMPDOWN_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class ScoringRampDown: public CommandBase {
public:
	ScoringRampDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
