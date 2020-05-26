#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewErosion :public View //hérite de View
{
private:
	Controller& controller;
public:
	ViewErosion(Controller& _controller); //constructeur
	virtual void notify(); //fonction virtuelle notifier qui execute notify quand le numero du choix correspond a cette fonctionnalité
	virtual int display(); //focntion qui permet de réaliser le traitement
};