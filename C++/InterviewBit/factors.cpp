#include <iostream>


using namespace std;


void GetFactors(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << "factors: " << i << endl;
        }
    }
}


int main()
{
    int var;
    cout << "Enter number for factors: ";
    cin >> var;
    GetFactors(var);
}
