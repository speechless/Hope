#pragma once
#include "instrument.h"
class Trumpet :
	public Instrument
{
public:
	Trumpet(void);
	~Trumpet(void);

public:
	int init();
	int playNote(int note);
	int switchOctave(int octave);
};

