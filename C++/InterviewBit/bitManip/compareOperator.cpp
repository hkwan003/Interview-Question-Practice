#include <iostream>

using namespace std;


int compare(int i, int j)
{
    return  (i^j);

 
}



int main()
{
    cout << "please enter in a digit to compare: ";
    int i,j;
    cin >> i;
    cout << endl << "now input second digit: ";
    cin >> j;
    cout << endl;
    cout << compare(i,j) << endl;
}
