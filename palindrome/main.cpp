#include <iostream>
#include <stack>
#include <string>
#include "main.h"


using namespace std;

#pragma region Palindrome

/*
	Function to check if a string of characters is a Palindrome
	Palindrom: Level
	The words are the same backword and fowards.
*/

bool PalCheck(string str)
{
	stack<char> pal;
	int counter = 0;

	for (int i = 0; i < str.size(); i++)
	{
		pal.push(str[i]);
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (pal.top() == str[i])
		{
			pal.pop();
			counter++;
		}

		if (pal.empty())
		{
			return true;
		}
	}

	if (!pal.empty()) {
		return false;
	}
}


#pragma endregion

int main()
{
	string test = "saippuakivikauppias";

	if (PalCheck(test) == true){
		cout << test << " is a Palindrome!" << endl;
	}
	else {
		cout << test << " is not a Palindrome!" << endl;

	}

}