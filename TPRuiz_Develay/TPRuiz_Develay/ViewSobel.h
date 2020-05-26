#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewSobel :public View //herite de view
{
private:
	Controller& controller;
public:
	ViewSobel(Controller& _controller); //constructeur
	virtual void notify(); //fonction virtuelle notify qui execute notify quand le numero du choix correspond a cette fonctionnalité
	virtual int display(); //fonction qui realise le traitement d'image
};