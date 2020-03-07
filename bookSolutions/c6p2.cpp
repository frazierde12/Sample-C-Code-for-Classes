
//Chapter 6: Programming Exercise 2

#include <iostream>
using namespace std;

void printStars(int lineNo, int lines);

int main()
{
  int lines;

  cout << "Enter the number of lines in the grid: " << flush;
  cin >> lines;
  cout << endl;

  printStars(1, lines);

  cout << endl;
  return 0;
}

void printStars(int lineNo, int lines)
{
  if (lineNo <= lines)
    {
      for (int i = 1; i <= lineNo; i++)
	cout << "*";
      cout << endl;

      printStars(lineNo + 1, lines);

      for (int i = 1; i <= lineNo; i++)
	cout << "*";
      cout << endl;
    }
}
