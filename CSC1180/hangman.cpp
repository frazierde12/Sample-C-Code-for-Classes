#include <iostream>
#include <string>
using namespace std;

int main()
{

  string answer = "apple";
  string guesses = "xxxxx";
  char guess;
  unsigned int correctGuesses{0};
  unsigned int incorrectGuesses{0};

  while(correctGuesses != answer.size())
    {
      cout << guesses << endl;
      cout << "Guess the word: ";
      cin >> guess;
  
      for (size_t i=0; i<answer.size(); i++)
	{
	  if(guess == answer[i])
	    {
	      guesses[i] = guess;
	      correctGuesses++;
	    }
	  else
	    {
	      incorrectGuesses++;
	    }
	}
     

    }
  cout << "/ | \\ ";
  return 0;
}

