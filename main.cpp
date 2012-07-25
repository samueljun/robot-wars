#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Game.h"
#include "Arena.h"
#include "Player.h"
#include "Robot.h"
#include "globals.h"
#include "History.h"

int main()
{
      // initialize the random number generator.  (you don't need to
      // understand how this works.)
    srand(static_cast<unsigned int>(time(0)));

      // create a game
      // use this instead to create a mini-game:   game g(3, 3, 2);
    Game g(15, 18, 50);

      // play the game
    g.play();
}