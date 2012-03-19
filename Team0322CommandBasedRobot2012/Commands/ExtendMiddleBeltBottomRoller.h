#ifndef EXTEND_MIDDLE_BELT_BOTTOM_ROLLER_H
#define EXTEND_MIDDLE_BELT_BOTTOM_ROLLER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author 322Programmer
 */
class ExtendMiddleBeltBottomRoller: public CommandBase {
public:
	ExtendMiddleBeltBottomRoller();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
