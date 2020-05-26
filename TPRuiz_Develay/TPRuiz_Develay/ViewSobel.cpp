#include "ViewSobel.h"

ViewSobel::ViewSobel(Controller& _controller)
	:View("Application du filtre de Sobel..."), controller(_controller)
{
	controller.addObserver(this);
}

void ViewSobel::notify()
{
	if (controller.getNumChoix() == 3)
		display();
}

int ViewSobel::display()
{
	clear();
	View::display();

	std::cout << "Voici l'image apres application du filtre de Sobel :" << std::endl;
	Mat image = imread("lena.jpg"), image2;

	// Vérifier si l’image existe bien dans le répertoire
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	// Affichage de l’image dans une fenêtre (Image)
	Sobel(image, image2, image.depth(), 1, 1, 3, 1, 0, BORDER_DEFAULT);		// Dérivée première
	string windowOrigin = "Image originale";
	string windowName = "Filtre de Sobel";
	namedWindow(windowName);
	namedWindow(windowOrigin);
	imshow(windowOrigin, image);
	imshow(windowName, image2);
	waitKey(0);
	destroyAllWindows();
	return 0;
}