#ifndef SCORINGRAMPUP_H
#define SCORINGRAMPUP_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class ScoringRampUp: public CommandBase {
public:
	ScoringRampUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
