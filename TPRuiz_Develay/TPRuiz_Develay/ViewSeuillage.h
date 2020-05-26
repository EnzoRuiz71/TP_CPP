#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewSeuillage :public View //herite de view
{
private:
	Controller& controller;
public:
	ViewSeuillage(Controller& _controller); //constructeur
	virtual void notify(); //fonction notify qui execute notify quand le numero du choix correspond a cette fonctionnalité
	virtual int display(); // fonction qui realise le traitement
};