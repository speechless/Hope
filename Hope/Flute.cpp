#include "stdafx.h"
#include "Flute.h"


Flute::Flute(void)
{
}


Flute::~Flute(void)
{
}


int Flute::init()
{
	return 0;
}


int Flute::playNote(int note)
{
	std::cout << "Flute:" << note << std::endl;
	controller->pressNumber(note);
	return 0;
}


int Flute::switchOctave(int _octave)
{
	if (_octave != octave) {
		controller->pressNumber(9);
	}
	

//	std::thread t(&Flute::startTimeout,this);
//	t.detach();


	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	
	return 0;
}


void Flute::startTimeout()
{
	std::cout << "locking" << std::endl;
	std::lock_guard<std::mutex> m(blocker);
	std::cout << "locked" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

