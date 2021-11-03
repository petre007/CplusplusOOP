#pragma once
#include <iostream>


using namespace std;

 class Parametrii {

	public:
		
		virtual void accelerare (float valViteza)  = 0;

		virtual void radio (string muzica)  = 0;

		virtual void decelerare (float valViteza) = 0;

		virtual ~Parametrii() {}

};

 