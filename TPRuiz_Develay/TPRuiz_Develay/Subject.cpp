#include "Subject.h"

Subject::Subject()
{}

void Subject::addObserver(Observer* observer)
{
	observers.push_back(observer);
}

void Subject::notify()
{
	for (int i = 0; i < observers.size(); ++i)
	{
		observers[i]->notify();
	}
}