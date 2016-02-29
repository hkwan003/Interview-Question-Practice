#include <iostream>

using namespace std;


bool isPower(int A)
{
    if(A == 0 || A == 2)
    {
        return false;
    }
    int result;
    for(int x = 0; x < result; x++)
    {
        cout << "X is: " << x << endl;
        if(x * x == A)
        {
            return true;
        }
        else if(x * x > A)
        {
            return false;
        }
    }
}

int main()
{
    cout << "input a power number to check if there is a power to it: ";
    int num;
    cin >> num;
    cout << isPower(num) << endl;
}
