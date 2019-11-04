#include <Walking.h>
#include <Running.h>
#include <Climbing.h>
#include <Falling.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void Walking::idle(PlayerFSM* a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Walking::running(PlayerFSM* a)
{
	std::cout << "Walking -> Running" << std::endl;
	a->setCurrent(new Running());
	delete this;
}
void Walking::falling(PlayerFSM* a)
{
	std::cout << "Walking -> Falling" << std::endl;
	a->setCurrent(new Falling());
	delete this;
}
void Walking::jumping(PlayerFSM* a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::climbing(PlayerFSM* a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}