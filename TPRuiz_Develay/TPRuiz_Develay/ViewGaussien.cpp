#include "ViewGaussien.h"

ViewGaussien::ViewGaussien(Controller& _controller)
	:View("Application du filtre gaussien..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewGaussien::notify()
{
	if (controller.getNumChoix() == 2)
		display();
}

int ViewGaussien::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres application du filtre gaussien" << std::endl;
	Mat image = imread("lena.jpg"), image2;

	// Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	// Affichage de l’image dans une fenêtre (Image)
	GaussianBlur(image, image2, Size(17, 17), 1, 0, BORDER_DEFAULT);
	string windowOrigin = "Image originale";
	string windowName = "Filtre gaussien";
	namedWindow(windowName);
	namedWindow(windowOrigin);
	imshow(windowOrigin, image);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}