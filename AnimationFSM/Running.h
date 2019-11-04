#ifndef RUNNING_H
#define RUNNING_H

#include <State.h>


class Running :public State
{
public:
	Running() {};
	~Running() {};
	void idle(PlayerFSM* a);
	void walking(PlayerFSM* a);
	void falling(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
};

#endif //

