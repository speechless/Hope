#include "stdafx.h"
#include "Instrument.h"


Instrument::Instrument(void)
{
	loadOnScreen();
	breaker = 100;
	octave = 1;

	loadOnScreen();
}


Instrument::~Instrument(void)
{
}


int Instrument::loadOnScreen()
{
	controller = new OnScreen;
	std::cout << "loaded controller" << std::endl;
	return 0;
}

