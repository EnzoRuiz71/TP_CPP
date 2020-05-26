#include "ViewMenu.h"
#include <iostream>

ViewMenu::ViewMenu(Controller& _controller)
	:View("Menu"), controller(_controller)
{
	controller.addObserver(this);
}

void ViewMenu::notify()
{
	if (controller.getNumChoix() == 0)
		display();
}

int ViewMenu::display()
{
	clear();
	View::display();

	std::cout << "\nQue voulez-vous faire maintenant ?\n" << std::endl;
	std::cout << "FILTRAGE :" << std::endl;
	std::cout << "		1. Filtre median" << std::endl;
	std::cout << "		2. Filtre gaussien" << std::endl;
	std::cout << "DERIVATION :" << std::endl;
	std::cout << "		3. Filtre de Sobel (calcul du gradient dans l'image)" << std::endl;
	std::cout << "MORPHOLOGIE MATHEMATIQUE :" << std::endl;
	std::cout << "		4. Dilatation" << std::endl;
	std::cout << "		5. Erosion" << std::endl;
	std::cout << "DETECTION DE CONTOURS :" << std::endl;
	std::cout << "		6. Application Canny" << std::endl;
	std::cout << "SEGMENTATION D'IMAGE :" << std::endl;
	std::cout << "		7. Operations de seuillages" << std::endl;
	std::cout << "		8. Segmentation par croissance de region\n" << std::endl;
	std::cout << "......................................................................" << std::endl;

	int choix;
	std::cin.clear();
	std::cin >> choix;
	controller.setChoix(choix);
	return 0;
}