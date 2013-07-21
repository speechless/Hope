#include "stdafx.h"

#include "MusicPlayer.h"

#include "Bell.h"
#include "Flute.h"
#include "Trumpet.h"

int main (int argc, char *argv[])
{
	Trumpet flute;
	flute.playNote(1);

	MusicPlayer player;
	player.loadInstrument(&flute);

	player.playSong();

	return 0;
}