#include "View.h"
#include <cstdlib>
#include <iostream>

View::View(std::string _nom)
	:nom(_nom)
{}

void View::clear() const
{
	//clear le menu
	system("CLS");
}

int View::display()
{
	std::cout << nom << std::endl;
	return 0;
}