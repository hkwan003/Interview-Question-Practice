#include <iostream>
#include <vector>


using namespace std;

int diffPossible(const vector<int> &A, int B)
{
    for(int x = 0; x < A.size(); x++)
    {
        for(int i = 1 + x; i < A.size(); i++)
        {
            cout << "num1: " << A.at(x) << " " << "num2: " << A.at(i) << endl;
            if(abs(A.at(x) - A.at(i)) == B)
            {
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    vector<int> A;
    A.push_back(1);
    A.push_back(5);
    A.push_back(3);

    cout << diffPossible(A, 2) << endl;
}
