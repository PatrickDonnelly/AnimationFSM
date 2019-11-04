#include <Falling.h>
#include <Idle.h>

#include <string>

void Falling::idle(PlayerFSM* a)
{
	std::cout << "Falling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
