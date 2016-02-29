#include <iostream>

using namespace std;


int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    return 0;
}

int main()
{
    int n; 
    cout << "input a number to print nth fibonacci number: ";
    cin >> n;
    cout << endl << "Fibonacci number is: " << fibonacci(n) << endl;
}

