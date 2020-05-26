#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewMedian:public View //hérite de view
{
private:
	Controller& controller;
public:
	ViewMedian(Controller& _controller); //constructeur
	virtual void notify(); //fonction virtuelle notify qui execute notify quand le numero du choix correspond a cette fonctionnalité
	virtual int display(); //fonction qui réalise le traitement
};