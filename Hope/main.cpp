#include "stdafx.h"

#include "MusicPlayer.h"
#include "FileManager.h"


int main (int argc, char *argv[])
{
	MusicPlayer player;

	if (loadSong("songs/music.txt",&player)) {
		std::cout << "Error opening music file" << std::endl;
	}


	return 0;
}