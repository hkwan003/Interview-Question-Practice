#include <iostream>

using namespace std;

int countBits(int a)
{
    int cnt = 0;
    while(a)
    {
        a = a & (a - 1);
        cnt++;
    }
    return cnt;

}

int main()
{
    cout << "enter in number to count bits: ";
    int num;
    cin >> num;
    cout << endl << countBits(num) << endl;
}

