#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewGaussien:public View //h�rite de view
{
private:
	Controller& controller;
public:
	ViewGaussien(Controller& _controller); //constructeur
	virtual void notify(); //fonction virtuelle notify qui execute notify quand le numero du choix correspond a cette fonctionnalit�
	virtual int display(); //fonction qui permet de r�aliser le traitement
};

