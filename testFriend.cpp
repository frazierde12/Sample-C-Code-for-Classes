#include <iostream>
using namespace std;

void friendFunc(classIssusFriend cIFObject)
{
  classIllusFriend localTwoObject;
  localTwoObject.x = 45;  // only works if Friend function

  cIFObject.x = 88;   // also works oly if friend
}
  

int main()
{
  classIllusFriend aObject;
  aObject.setx(32);

  friendFunc(aObject);

  return 0;
}

