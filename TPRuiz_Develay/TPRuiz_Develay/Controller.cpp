#include "Controller.h"

Controller::Controller()
	:Subject(), numChoix(0)
{}

void Controller::setChoix(const int& val)
{
	if (val >= 0 && val <= 8)
	{
		numChoix = val;
	}
	notify();
}

int Controller::getNumChoix()
{
	return numChoix;
}