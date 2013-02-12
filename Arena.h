#ifndef ARENA_INCLUDED
#define ARENA_INCLUDED

#include <string>

#include "globals.h"
#include "History.h"

class Player;
class Robot;

class Arena
{
  public:
        // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();

        // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    void    display(std::string msg) const;

        // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    bool   destroyRobot(int r, int c);
    bool   moveRobots();

	History &history();

  private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    int     m_nRobots;

	History m_history;
};

#endif // ARENA_INCLUDED
