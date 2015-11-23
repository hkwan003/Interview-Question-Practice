#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string int_to_string(int x)
{
	ostringstream o;
	o << x;
	o.str().c_str();
	string s = o.str();
	return s;
}


int main()
{

	string initString;
	char firstLetter;
	string finishWord;
	int ctr = 0;


	cout << "please input a string with repeating letters" << endl;

	
	cin >> initString;


	if(initString.size() != 0)
	{
		firstLetter = initString.at(0);
	}

	for(int x = 0; x < initString.size(); x++)
	{
		cout << "iteration: " << x << endl;
		cout << "original ctr: " << ctr << endl;
		cout << "initstring: " << initString.at(x) << "    " << "firstLetter: " << firstLetter << endl; 
		if(initString.at(x) == firstLetter)
		{
			ctr += 1;
			cout << "added first: " << ctr << endl;
			if(x + 1 == initString.size())
			{
				cout << "is this executing" << endl;
				finishWord += firstLetter;
				finishWord += int_to_string(ctr);	
			}
		}
		else if(initString.at(x) != firstLetter)
		{
			cout << "ctr: " << ctr << endl;
			finishWord += firstLetter;
			finishWord += int_to_string(ctr);
			firstLetter = initString.at(x);
			ctr = 1;
		}
		
	}

	cout << finishWord;

	cout << endl;

}