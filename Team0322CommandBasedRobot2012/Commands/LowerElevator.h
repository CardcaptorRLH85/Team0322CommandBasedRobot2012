#ifndef LOWER_ELEVATOR_H
#define LOWER_ELEVATOR_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class LowerElevator: public CommandBase {
public:
	LowerElevator();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
