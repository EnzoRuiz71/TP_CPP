#include "ViewMedian.h"

ViewMedian::ViewMedian(Controller& _controller)
	:View("Voici le filtre Median :"), controller(_controller)
{
	controller.addObserver(this);
}

void ViewMedian::notify()
{
	if (controller.getNumChoix() == 1)
		display();
}

int ViewMedian::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres application du filtre median" << std::endl;
	Mat image = imread("lena.jpg"), image2;

	// Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	// Affichage de l’image dans une fenêtre (Image)
	medianBlur(image, image2, 7);
	string windowOrigin = "Image originale";
	string windowName = "Filtre median";
	namedWindow(windowName);
	namedWindow(windowOrigin);
	imshow(windowOrigin, image);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}