#include "ViewSegmentation.h"

ViewSegmentation::ViewSegmentation(Controller& _controller)
	:View("Segmentation de l'image par croissance de regions..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewSegmentation::notify()
{
	if (controller.getNumChoix() == 8)
		display();
}

int ViewSegmentation::display()
{
	clear();
	View::display();

	std::cout << "Cette application est en cours de developpement... Ce filtre n'est malheureusement pas encore disponible." << std::endl;
	waitKey(0);
	return 0;
}