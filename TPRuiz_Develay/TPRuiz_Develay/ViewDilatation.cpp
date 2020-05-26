#include "ViewDilatation.h"

ViewDilatation::ViewDilatation(Controller& _controller)
	:View("Dilatation de l'image..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewDilatation::notify()
{
	if (controller.getNumChoix() == 4)
		display();
}

int ViewDilatation::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres application dilatation :" << std::endl;
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
	dilate(image, image2, masque);	// Dilatation de l'image
	string windowOrigin = "Image originale";
	string windowName = "Dilatation";
	namedWindow(windowName);
	namedWindow(windowOrigin);
	imshow(windowOrigin, image);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}