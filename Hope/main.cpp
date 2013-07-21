#include "stdafx.h"

#include "MusicPlayer.h"
#include "FileManager.h"


void keyMonitor ()
{
	while (1)
	{
		if(GetAsyncKeyState(VK_END))
		{
			exit(1);
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}


int main (int argc, char *argv[])
{
	// Key monitor (END to end program)
	std::thread t(keyMonitor);
	t.detach();

	// Program
	MusicPlayer player;

	if (loadSong("songs/music.txt",&player)) {
		std::cout << "Error opening music file" << std::endl;
	}

	player.playSong();

	return 0;
}