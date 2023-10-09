#include "Vortex.hpp"

#include <sstream>
#include <iostream>

///////////////////////////////////////////////////////////////////////////////
//    The Declaration/Definition of small function not declare in the hpp    //
///////////////////////////////////////////////////////////////////////////////
std::string CreateSpaces(std::string InputText, int length)
{
	std::string textToReturn = InputText;
	while (textToReturn.length() < length)
	{
		textToReturn.append(" ");
	}
	return textToReturn;
}

///////////////////////////////////////////////////////////////////////////////
//         The definition of each function except the Vortex class           //
///////////////////////////////////////////////////////////////////////////////
namespace _Vortex
{
	using namespace specialCharacter;

	void AppInformation::Print()
	{
		std::stringstream Vortex;

		Vortex << "      " << c1 << th << th << th << th << th << th << th << th << th << th << c2 << '\n'; // l1
		Vortex << "      " << tv << "  Vortex  " << tv << '\n'; // l2
		Vortex << c1 << th << th << th << th << th << rtl << th << th << th << th << th << th << th << th << th << th << rtl << th << th << th << th << th << c2 << '\n';
		Vortex << tv << CreateSpaces(static_cast<std::string>("VERSION : ") + version, 22) << tv << '\n';
		Vortex << tv << "UPDATE AVAILABLE : " << (newVersion ? "Yes" : "No ") << tv << '\n';
		Vortex << tv << CreateSpaces(static_cast<std::string>("MOD FOUND : ") + std::to_string(modLoded), 22) << tv << '\n';
		Vortex << c4 << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << th << c3;

		std::cout << Vortex.str() << std::endl;
	}
}

///////////////////////////////////////////////////////////////////////////////
//                The Vortex App Class to call in an app                     //
///////////////////////////////////////////////////////////////////////////////
Vortex::Vortex()
{
	information =
	{
		VORTEX_VERSION,
		true,
		323
	};
	information.Print();
}

Vortex::~Vortex()
{
		
}

void Vortex::Play()
{
#if VDEBUG
	std::cout << "debug\n";
#else
	std::cout << "release\n";
#endif
}