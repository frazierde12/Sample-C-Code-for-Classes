// encrypt decrypt
// encrypt   d = (d + 7)%10
// decrypt   d = ((d+10)-7)%10

#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int choice{1};
  int n{0};
  int d4{0};  // to hold 1000s place
  int d3{0};  // to hold 100s place
  int d2{0};  // to hold 10s place
  int d1{0};  // to hold 1s place
  int temp{0};
  
  cout << "1- encrypt    2-decrypt :";
  cin >> choice;

  cout << "Enter a 4-digit number:";
  cin >> n;

  
  // break out the digits
  d4 = n/1000;
  n = n%1000;
  d3 = n/100;
  n = n%100;
  d2 = n/10;
  n = n %10;
  d1 = n;
  
  switch(choice)
    {
    case 1:
      //encrypt
      d4 = (d4 + 7)%10;
      d3 = (d3 + 7)%10;
      d2 = (d2 + 7)%10;
      d1 = (d1 + 7)%10;	

      // swap 1 - 3 and 2 - 4
      temp = d1;
      d1 = d3;
      d3 = temp;

      temp = d2;
      d2 = d4;
      d4 = temp;      

      cout << d4 << d3 << d2 << d1 << endl;
      
      break; // end encrypt

    case 2:
      // decrypt   d = ((d+10)-7)%10
      // unswap the numbers
      temp = d1;
      d1 = d3;
      d3 = temp;

      temp = d2;
      d2 = d4;
      d4 = temp;

      // undo the encryption
      d4 = ((d4+10)-7)%10;
      d3 = ((d3+10)-7)%10;
      d2 = ((d2+10)-7)%10;
      d1 = ((d1+10)-7)%10;


      cout << d4 << d3 << d2 << d1 << endl;
      
      break; // end decrypt      

    default:
      // print error
      cout << "Error\n";

    } // end switch
  return 0;
}

