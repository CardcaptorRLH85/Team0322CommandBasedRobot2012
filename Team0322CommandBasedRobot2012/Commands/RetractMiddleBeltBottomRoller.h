#ifndef RETRACT_MIDDLE_BELT_BOTTOM_ROLLER_H
#define RETRACT_MIDDLE_BELT_BOTTOM_ROLLER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class RetractMiddleBeltBottomRoller: public CommandBase {
public:
	RetractMiddleBeltBottomRoller();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
