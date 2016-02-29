#include <iostream>

using namespace std;

void rotateMatrix(int &a, int &b, int &c, int &d)
{
    int temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
}


int main()
{
    int n = 4;
    int arr[4][4] = 
    {   
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12}, 
        {13,14,15,16}
    };

    for(int i = 0; i < n/2; i++)
    {
        for(int j = 0; j < (n + 1) / 2; j++)
        {
            rotateMatrix(arr[i][j], arr[n - 1 - j][i], arr[n - 1 - i][n - 1 - j], arr[j][n - 1 - i]);
        }
    }
    for(int x = 0; x < 4; x++)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << arr[x][k] << " ";
        }
        cout << endl;
    }
}

