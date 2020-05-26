#include "ViewErosion.h"

ViewErosion::ViewErosion(Controller& _controller)
	:View("Erosion de l'image..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewErosion::notify()
{
	if (controller.getNumChoix() == 5)
		display();
}

int ViewErosion::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres erosion :" << std::endl;
	Mat image = imread("lena.jpg"), image2;

	// Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	// Affichage de l’image dans une fenêtre (Image)
	Mat masque = getStructuringElement(MORPH_CROSS, Size(7, 7), Point(3, 3));	// Création du masque
	erode(image, image2, masque);	// Erosion de l'image
	string windowOrigin = "Image originale";
	string windowName = "Erosion";
	namedWindow(windowName);
	namedWindow(windowOrigin);
	imshow(windowOrigin, image);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}