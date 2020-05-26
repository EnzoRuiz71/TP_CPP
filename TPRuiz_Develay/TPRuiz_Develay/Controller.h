#pragma once
#include "Subject.h"

class Controller:public Subject //Hérite de Subject
{
private:
	int numChoix;
public:
	Controller(); //constructeur
	void setChoix(const int& val);//fonction qui permet de choisir la fonctionnalité, le traitement
	int getNumChoix(); //récupérer le choix
};

