#pragma once
#include "Controller.h"
#include "View.h"
#include "Observer.h"
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class ViewCanny :public View //hérite de View
{
private:
	Controller& controller;
public:
	ViewCanny(Controller& _controller); //constructeur
	virtual void notify(); //fonction virtuelle notify qui execute notify quand le numero du choix correspond a cette fonctionnalité
	virtual int display(); //fonction virtuelle display qui permet de lancer la fonctionnalité, qui traite l'image
};