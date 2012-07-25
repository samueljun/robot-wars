#ifndef HISTORY_INCLUDED
#define HISTORY_INCLUDED

class Arena;

class History
{
  public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;

  private:
	Arena* m_historyArena;
	int m_numOfMoves;
	int historyR[1000];
	int historyC[1000];
	int m_rows;
	int m_cols;
	int rows() const;
	int cols() const;
};

#endif // HISTORY_INCLUDED