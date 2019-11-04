#ifndef WALKING_H
#define WALKING_H

#include <State.h>


class Walking :public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(PlayerFSM* a);
	void running(PlayerFSM* a);
	void falling(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
};

#endif //

