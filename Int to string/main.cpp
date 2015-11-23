#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int i = 4;
    ostringstream o;
    o << i;

    o.str().c_str();

    string s = o.str();

    cout << s  << endl;

    string jk = "phone: ";
    jk += s;
    cout << jk << endl;
}

