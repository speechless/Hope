#pragma once
#include "Bell.h"
#include "Flute.h"
#include "Horn.h"

class MusicPlayer
{
public:
	MusicPlayer(void);
	~MusicPlayer(void);

public: // Instrument Config
	int loadBell();
	int loadFlute();
	int loadHorn();

	int loadMusicSheet(std::vector <char> object);
	int setTempo(int value);
	int setMeasure(float value);

public:
	int playSong();

private:
	int tempo;
	float measure;
	std::vector <char> musicSheet;

	Instrument *instrument;
};

