#include <iostream>
int main()
{
  std::cout << "What is the best birtday treat?" << std::endl;
  char s[9] = {'s', '%','o', 'x', 'c', 'b' ,'a', 'w', 't'};
  for (int i = 8; i>=0; i=i-2)
    std::cout << s[i] << " ";
  std::cout << std::endl;
  return 0;
}

