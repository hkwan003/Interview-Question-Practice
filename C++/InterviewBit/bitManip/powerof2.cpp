#include <iostream>

using namespace std;


int power2(int a)
{
    a = a & (a - 1);

    return a == 0;
}

int main()
{
    cout << "please enter a number to verify if it is a power of 2: ";
    int num;
    cin >> num;
    cout << endl << power2(num) << endl;
}

