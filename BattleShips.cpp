#include <iostream>

using std::cout;
using std::endl;
using std::cin;
void Board_Building(char Board[5][10]);
void Board_Selection(int x, int y, char Board[5][10],  char Board_hit);
int Move_Input(int* px, int* py);



char Board[5][10] {
                   {"# # # # #"},
		   {"# # # # #"},
		   {"# # # # #"},
		   {"# # # # #"},
		   {"# # # # #"}
                  };
int Turns;
int x, y;
const char Board_hit {};


int *px {new int{x}};
int *py {new int{y}};
char *pBoard{new char{Board[5][10]}};


void Board_Building(char Board[5][10])
{
  for(int i ; i < 5 ; ++i)
    {
      cout << Board[i] << endl;
    }
  
}

int Move_Input(int* px, int* py)
{
  cout << "Please enter 1-5 for the row:" << endl;
  cin >> *px;
  cout << "Please enter 1-5 for the space:" << endl;
  cin >> *py;
  return *py, *px;
}


void Board_Selection(int x, int y, char* pBoard[5][10],  char Board_hit)
{
  if(x == 1)
    {
      switch(y)
	{
	case 1:
	  *pBoard[0][0] = "@";
	  break;
	}
    }
  
}



int main()
{
  
  Board_Building(Board);
  Move_Input(px, py);
  Board_Selection(x, y, Board, Board_hit);
  for(int i ; i < 5 ; ++i)
    {
      cout << Board[i] << endl;
    }
  char mew;
  cin >> mew;
  return 0;
}
