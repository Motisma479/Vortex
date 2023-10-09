#include <iostream>
#include "Vortex.hpp"

int main(int argc, char** argv)
{
#ifdef WINDOWS
	std::system("chcp 65001");
	std::system("cls");
#endif

	Vortex vortex;

	vortex.Play();

#ifdef WINDOWS
	system("pause");
#endif
	return 0;
}