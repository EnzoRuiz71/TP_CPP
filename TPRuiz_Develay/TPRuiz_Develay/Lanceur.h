#pragma once
#include "Controller.h"
#include "ViewMenu.h"
#include "ViewMedian.h"
#include "ViewGaussien.h"
#include "ViewSobel.h"
#include "ViewDilatation.h"
#include "ViewErosion.h"
#include "ViewCanny.h"
#include "ViewSeuillage.h"
#include "ViewSegmentation.h"

class Lanceur
{
private:
	// classe composé classes suivantes à l'aide de ces instanciations
	Controller controller;
	ViewMenu viewMenu;
	ViewMedian viewMedian;
	ViewGaussien viewGaussien;
	ViewSobel viewSobel;
	ViewDilatation viewDilatation;
	ViewErosion viewErosion;
	ViewCanny viewCanny;
	ViewSeuillage viewSeuillage;
	ViewSegmentation viewSegmentation;
public:
	Lanceur(); //constructeur
	void lancer(); //fonction qui permet de lancer le processus des classes
};