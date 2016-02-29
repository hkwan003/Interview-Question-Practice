#include <iostream>
#include <string>
using namespace std;


string reverseWords(string &var)
{
    for(int x = 0; x < var.size()/2; x++)
    {
        cout << "x: " << x << endl;
        swap(var.at(x), var.at(var.size() - x - 1));
        cout << var.at(x) << ' ' << var.size() - x - 1 << endl;
    }
    cout << var << endl;
    int x = 0;
    int cnt = 0;
    for(int x = 0; x < var.size(); x++)
    {
        if(var.at(x) == ' ')
        {
            cout << "now is this working ? " << endl;
            for(int j = 0; j < (x - cnt)/2; j++)
            {
                cout << "first letter: " << var.at(j + cnt) << endl;
                cout << "second letter: " << var.at(x - 1 - j) << endl;
                swap(var.at(j + cnt), var.at(x - 1 - j));
                cout << "after swaps: " << endl;
                cout << "first letter: " << var.at(j + cnt) << endl;
                cout << "second letter: " << var.at(x - 1 - j) << endl; 
            }
            cnt = x + 1;
        }
        if(x == var.size() - 1)
        {
            for(int j = 0; j < (x - cnt + 1) / 2; j++)
            {
                swap(var.at(j + cnt), var.at(x - j));
            }
        }
    }
    return var;
}



int main()
{
    string s = "Calvin is dope af";
    cout << reverseWords(s) << endl;
}

