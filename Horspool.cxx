

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ShiftTable(char *P, char *A, int *Table, int m)
{
	for(int i = 0; i < 55; i++)
	{
		Table[i] = m;
	}
	
	for(int j = 0; j < 55; j++)
	{
		for(int a = 0; a < m-1; a++)
		{
			if(P[a] == A[j])
			{
				Table[j] = abs(m - (a + 1));
				cout << j << '\t' << Table[j] << endl;
			}
		}
	}
}

//HorspoolMatching(pattern, text)

int main()
{
	//Initialize array of possible characters
	char A[55];
	A[0] = 'a';
	
	//Fill array with lowercase alphabet
	for(int i = 1; i < 26; i++)
	{
		A[i] = A[i-1] + 1;
	}
	
	A[26] = 'A';
	//Fill array with uppercase alphabet
	for(int i = 27; i < 52; i++)
	{
		A[i] = A[i-1] + 1;
	}
	A[52] = '1';
	A[53] = '0';
	A[54] = '_';

	
	//Take in user's string pattern
	string pattern;
	cout << "Please enter your pattern to search for." << endl;
	cout << "Uppercase/Lowercase Alphabet, 0, 1, '_' for a space): " << endl;
	cin >> pattern;
	
	int m = pattern.length();
	
	char P[m]; //array for the search pattern
	
	//put string pattern into P[]
	for(int i = 0; i < m; i++)
	{
		P[i] = pattern[i];
	}
	
	//Make an array for the shift table
	int Table[55];
	
	//BEGINNING OF HORSPOOLS ALGORITHM-------------------
	
	//Call function to make shift table
	ShiftTable(P, A, Table, m);

	//Initialize text for the pattern to be matched to
	string T; 
	cout << "Please enter the text to be searched." << endl;
	cout << "Uppercase/Lowercase Alphabet, 0, 1, '_' for a space): " << endl;
	cin >> T;
	
	//Print shift table (temporary)
	//for(int i = 0; i < 55; i++)
	//{
		//cout << A[i] << " " << Table[i] << endl;
	//}
	
	//Index of the left end of the first matching substring or 
	// will stay as -1 if no matches
	int matchIndex = -1; 
	
	int i = m-1;
	int k = 0;
	while(i < 55)
	{
	  //	  cout << i << '\t' << k << '\t' << P[m-1-k] << '\t' << T[i-k] << endl;
		while( (k < m) && (P[m-1-k] == T[i-k]))
		{
		  cout << "xxx1\n";
			k++;
		}
		if(k == m)
		{
		  cout << "xxx2\n";		  
			matchIndex = i - m + 1;
		}
		else
		{
		  cout << "xxx3\n";		  
			i = i + Table[T[i]];
			cout << i << endl;
		}
	}
	
	if(matchIndex != -1)
	{
		cout << "The index of the left end of the first matching substring is ";
		cout << matchIndex << endl;
	}
	else
	{
		cout << "There were no matches" << endl;
	}
		
		 
	return 0;
}

