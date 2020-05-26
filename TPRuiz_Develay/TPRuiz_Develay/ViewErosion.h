#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewErosion :public View //h�rite de View
{
private:
	Controller& controller;
public:
	ViewErosion(Controller& _controller); //constructeur
	virtual void notify(); //fonction virtuelle notifier qui execute notify quand le numero du choix correspond a cette fonctionnalit�
	virtual int display(); //focntion qui permet de r�aliser le traitement
};