#pragma once
#include "Observer.h"
#include <iostream>
class View:public Observer //Herite de Observer
{
private:
	std::string nom;
public:
	View(std::string _nom);//constructeur
	void clear() const; //permet de nettoyer l'écran
	virtual int display();//fonction virtuelle 
};