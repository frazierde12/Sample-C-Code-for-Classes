#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1{"The values in any left subtree"
            "\nare less than the value in the"
            "\nparent node and the values in "
            "\nany right subtree are greater"
            "\nthan the value in the parent node"};
  
  cout << "Original string:\n" << s1 << endl << endl;

  s1.erase(62);

  // replace all spaces with a period
  size_t position = s1.find(" ");
  while(position != string::npos)
    {
      s1.replace(position, 1, ".");
      position = s1.find(" ", position + 1);
    }

  cout << "Original string after replacement:\n" << s1 << endl << endl;  
  return 0;
}

