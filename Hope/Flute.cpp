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
	controller->pressNumber(note);
	return 0;
}


int Flute::switchOctave(int _octave)
{
	blocker.lock();
	if (_octave != octave) {
		controller->pressNumber(9);
		octave = _octave;
	}

	std::thread t(&Flute::startTimeout,this);
	t.detach();
	
	blocker.unlock();

	return 0;
}


void Flute::startTimeout()
{
	std::lock_guard<std::mutex> m(blocker);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

