CC=g++
CFLAGS=-I.

robotwars: main.cpp Arena.cpp Game.cpp History.cpp Player.cpp Robot.cpp utilities.cpp
	$(CC) $(CFLAGS) -o robotwars.out main.cpp Arena.cpp Game.cpp History.cpp Player.cpp Robot.cpp utilities.cpp
