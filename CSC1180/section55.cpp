// summing even integers from 2 to 20

#include <iostream>
using namespace std;

int main()
{

  // declare variables
  unsigned int total{0};
  int max{0};

  cout << "Enter the maximum even number to total to: ";
  cin >> max;

  while (max%2 != 0)
    {
      cout << "Error\n";
      cout << "Enter the maximum even number to total to: ";
      cin >> max;
    }

  
  for (int n = 2; n <=max; n = n + 2)
    {
      total = total + n;
      //cout << "****" << n << '\t' << total << endl;
    }
  cout << "Total of even numbers from 2 to " << max << " is : " << total << endl;
  
  return 0;
}
