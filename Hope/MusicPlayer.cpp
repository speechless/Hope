#include "stdafx.h"
#include "MusicPlayer.h"


MusicPlayer::MusicPlayer(void)
{
}


MusicPlayer::~MusicPlayer(void)
{
}


int MusicPlayer::loadInstrument(Instrument *object)
{
	instrument = object;

	return 0;
}

int MusicPlayer::playSong()
{
	for (int i = 1; i <= 5; i++)
		instrument->playNote(i);

	return 0;
}