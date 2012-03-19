#ifndef RAISE_ELEVATOR_H
#define RAISE_ELEVATOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RaiseElevator: public CommandBase {
public:
	RaiseElevator();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
