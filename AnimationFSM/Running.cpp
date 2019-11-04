#include <Running.h>
#include <Climbing.h>
#include <Idle.h>
#include <Walking.h>
#include <Falling.h>
#include <Jumping.h>

#include <string>

void Running::idle(PlayerFSM* a)
{
	std::cout << "Running -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Running::walking(PlayerFSM* a)
{
	std::cout << "Running -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}
void Running::falling(PlayerFSM* a)
{
	std::cout << "Running -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}
void Running::jumping(PlayerFSM* a)
{
	std::cout << "Running -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Running::climbing(PlayerFSM* a)
{
	std::cout << "Running -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}