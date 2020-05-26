#include "ViewSeuillage.h"

ViewSeuillage::ViewSeuillage(Controller& _controller)
	:View("Application du filtre de seuillage..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewSeuillage::notify()
{
	if (controller.getNumChoix() == 7)
		display();
}

int ViewSeuillage::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres application du filtre de seuillage :" << std::endl;
	Mat image = imread("lena.jpg"), image2, gray;

	// Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	// Affichage de l’image dans une fenêtre (Image)
	cvtColor(image, gray, COLOR_BGR2GRAY);	//Conversion de l'image en niveaux de gris
	threshold(gray, image2, 120, 255, 3);
	string windowOrigin = "Image originale";
	string windowName = "Seuillage";
	string windowTransition = "Image en niveaux de gris";
	namedWindow(windowName);
	namedWindow(windowTransition);
	namedWindow(windowOrigin);
	imshow(windowOrigin, image);
	imshow(windowTransition, gray);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}