#include <iostream>

using namespace std;

void compareString(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a.size() == b.size())
    {
        for(int x = 0; x < a.size(); x++)
        {
            if(a.at(x) != b.at(x))
            {
                return;
            }
        }
        cout << "this is correct" << endl;
    }
    else
    {
        return;
    }
}



int main()
{
    string input1;
   string input2;
    cout << "input your own strings to compare: ";
    cin >> input1;
    cout << endl << "input your second string: ";
    cin >> input2;
    compareString(input1, input2);
}
