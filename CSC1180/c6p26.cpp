// Temperature Convert
// c = (f - 32) * 5/9
// f = c * 9/5 + 32

#include <iostream>
using namespace std;

// Function Prototypes
double celsius(double f);
double fahrenheit(double c);

int main()
{

  for (int c = 0; c<=100; c++)
    {
      cout << c << '\t' << fahrenheit(c) << endl;
    }

  for (int f = 32; f<=212; f++)
    {
      cout << f << '\t' << celsius(f) << endl;
    }  

  
  return 0;
}

double celsius(double f)
{
  double temp;
  temp = 5.0/9*(f - 32);
  return temp;
}

double fahrenheit(double c)
{
  double temp;
  temp = c * 9.0/5 + 32;
  return temp;
}

