#pragma once
#include "instrument.h"
class Horn :
	public Instrument
{
public:
	Horn(void);
	~Horn(void);

public:
	int init();
	int playNote(int note);
	int switchOctave(int octave);
};

