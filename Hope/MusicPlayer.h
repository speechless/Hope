#pragma once
#include "Instrument.h"

class MusicPlayer
{
public:
	MusicPlayer(void);
	~MusicPlayer(void);

public:
	int loadInstrument(Instrument *object);

	int playSong();

private:
	Instrument *instrument;
};

