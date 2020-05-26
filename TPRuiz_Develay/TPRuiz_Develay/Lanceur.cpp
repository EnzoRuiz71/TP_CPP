#include "Lanceur.h"

Lanceur::Lanceur()
	:controller(), viewMenu(controller), viewMedian(controller), viewGaussien(controller), viewSobel(controller), viewDilatation(controller), viewErosion(controller), viewCanny(controller), viewSeuillage(controller), viewSegmentation(controller)
{}

void Lanceur::lancer()
{
	controller.notify();
}
