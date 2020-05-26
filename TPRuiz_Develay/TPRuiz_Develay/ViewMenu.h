#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"

class ViewMenu:public View //hérite de view
{
private:
	Controller& controller;
public:
	ViewMenu(Controller& _controller); //constructeur
	virtual void notify(); //fonction notify
	virtual int display(); //fonction qui affiche le menu
};

