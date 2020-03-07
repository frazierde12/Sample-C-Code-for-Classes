 #include <iostream>
#include <cmath>
#include "nQueensPuzzleImp.cpp"

using namespace std;

int main()
{
	nQueensPuzzle queens(8);

	queens.queensConfiguration(0);
	cout << "Number of Solutions: " << queens.solutionsCount() << endl;

	return 0;
}
