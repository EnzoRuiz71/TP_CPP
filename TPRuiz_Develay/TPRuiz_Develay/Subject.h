#pragma once
#include <vector>
#include "Observer.h"

class Subject
{
private:
	std::vector<Observer*> observers; //tableau dde vecteurs de Observer
public:
	Subject(); //Constructeur
	void addObserver(Observer* observer); //ajouter un observeur
	void notify();//fonctionne notifier
};

