/////////////////////////////////////////////////////////////////////////
//
//
//
//
/////////////////////////////////////////////////////////////////////////
#pragma once

#define VORTEX_VERSION "v0.0"

namespace _Vortex
{
	struct AppInformation
	{
		const char* version;
		bool newVersion;
		int modLoded;
		void Print();
	};

	
	///////////////////////////////////////////
	//          special Characters           //
	///////////////////////////////////////////
	namespace specialCharacter
	{
		// \xe2\x94\x8f : ┏
		constexpr char c1[4] = "\xe2\x94\x8f"; // ┏
		// \xe2\x94\x93 : ┓
		constexpr char c2[4] = "\xe2\x94\x93"; // ┓
		// \xe2\x94\x9b : ┛
		constexpr char c3[4] = "\xe2\x94\x9b"; // ┛
		// \xe2\x94\x97 : ┗
		constexpr char c4[4] = "\xe2\x94\x97"; // ┗

		// \xe2\x94\x83 : ┃
		constexpr char tv[4] = "\xe2\x94\x83"; // ┃
		// \xe2\x94\x81 : ━
		constexpr char th[4] = "\xe2\x94\x81"; // ━
		// \xe2\x94\xbb : ┻
		constexpr char rtl[4] = "\xe2\x94\xbb"; // ┻
	}
}

///////////////////////////////////////////
//          Vortex game class            //
///////////////////////////////////////////
class Vortex
{
public:
	Vortex();
	~Vortex();
		
	_Vortex::AppInformation information;
	
	void Play();
};