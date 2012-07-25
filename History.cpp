#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "History.h"
#include "Game.h"
#include "Arena.h"
#include "Player.h"
#include "Robot.h"
#include "globals.h"

History::History(int nRows, int nCols)
 : m_rows(nRows), m_cols(nCols), m_numOfMoves(0)
{}

bool History::record(int r, int c)
{
	if (r < 1 || c < 1 || r > MAXROWS || c > MAXCOLS)
		return false;

	m_numOfMoves++;
	historyR[m_numOfMoves-1] = r;
	historyC[m_numOfMoves-1] = c;

	return true;
}

int History::rows() const
{
	return m_rows;
}

int History::cols() const
{
	return m_cols;
}

void History::display() const
{
	  // Position (row,col) in the arena coordinate system is represented in
      // the array element grid[row-1][col-1]
    char grid[MAXROWS][MAXCOLS];
    int r, c;
    
        // Fill the grid with dots
    for (r = 0; r < rows(); r++)
        for (c = 0; c < cols(); c++)
            grid[r][c] = '.';
	
		// Indicate the players move history
	for (int x = 0; x < m_numOfMoves; x++)
	{
		char& gridChar = grid[historyR[x]-1][historyC[x]-1];
        switch (gridChar)
        {
          case '.':
			  gridChar = '1';
			  break;
		  case '9':
			  break;
          default:
			  gridChar++;
			  break;  // '2' through '8'
        }
	}

        // Draw the grid
    clearScreen();
    for (r = 0; r < rows(); r++)
    {
        for (c = 0; c < cols(); c++)
            cout << grid[r][c];
        cout << endl;
    }
    cout << endl;
}

