#include "ViewCanny.h"

ViewCanny::ViewCanny(Controller& _controller)
	:View("Application du filtre Canny..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewCanny::notify()
{
	if (controller.getNumChoix() == 6)
		display();
}

int ViewCanny::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres application du filtre Canny :" << std::endl;
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
	Canny(gray, image2, 50, 150, 3, false);	// Detection des contours
	string windowOrigin = "Image originale";
	string windowName = "Application Canny (detection de contours)";
	string windowTransition = "Image en niveaux de gris";
	namedWindow(windowOrigin);
	namedWindow(windowTransition);
	namedWindow(windowName);
	imshow(windowOrigin, image);
	imshow(windowTransition, gray);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}