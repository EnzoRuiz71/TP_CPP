#pragma once
#include "Subject.h"

class Controller:public Subject //H�rite de Subject
{
private:
	int numChoix;
public:
	Controller(); //constructeur
	void setChoix(const int& val);//fonction qui permet de choisir la fonctionnalit�, le traitement
	int getNumChoix(); //r�cup�rer le choix
};

