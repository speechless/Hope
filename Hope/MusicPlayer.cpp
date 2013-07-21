#include "stdafx.h"
#include "MusicPlayer.h"


MusicPlayer::MusicPlayer(void)
{
}


MusicPlayer::~MusicPlayer(void)
{
}


int MusicPlayer::loadBell()
{
	instrument = new Bell;
	return 0;
}


int MusicPlayer::loadFlute()
{
	instrument = new Flute;
	return 0;
}

int MusicPlayer::loadHorn()
{
	instrument = new Horn;
	return 0;
}


int MusicPlayer::loadMusicSheet(std::vector <char> object)
{
	musicSheet = object;
	return 0;
}


int MusicPlayer::playSong()
{
	for (int i = 1; i <= 5; i++)
	{
		instrument->playNote(i);
	}

	return 0;
}


int MusicPlayer::setTempo(int value)
{
	tempo = value;
	return 0;
}


int MusicPlayer::setMeasure(float value)
{
	measure = value;
	return 0;
}

