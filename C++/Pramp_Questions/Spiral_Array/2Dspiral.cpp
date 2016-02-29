#include <iostream>

using namespace std;

void PrintSpiral(int columnSize, int rowSize, int Arr[4][4])
{
    int topRow = 0;
    int bottomRow = rowSize - 1;
    int leftColumn = 0;
    int rightColumn = columnSize - 1;
    int iterator;


    //cout << "is this goign in" << endl;
    
    while(topRow < bottomRow && leftColumn < rightColumn)
    {
        for(iterator = leftColumn; iterator <= rightColumn; iterator++)
        {
            cout << Arr[topRow][iterator] << " ";
        }
        //cout << "step 1 complete" << endl;
        topRow++;
        for(iterator = topRow; iterator <= bottomRow; iterator++)
        {
            cout << Arr[iterator][rightColumn] << " ";
        }
        //cout << "step 2 complete" << endl;
        rightColumn--;
        //if(topRow <= bottomRow)
        //{
            for(iterator = rightColumn; iterator >= leftColumn; iterator--)
            {
                cout << Arr[bottomRow][iterator] << " ";
            }
            //cout << "step 3 complete" << endl;
            bottomRow--;
        //}
        //if(leftColumn < rightColumn)
        //{
            for(iterator = bottomRow; iterator >= topRow; iterator--)
            {    
                //cout << "output iterator: " << iterator << endl;
                cout << Arr[iterator][leftColumn] << " ";
            }
            //cout << "step 4 complete" << endl;
            leftColumn++;
        //}
    }
}


int main()
{
    int array[4][4] =
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };


    PrintSpiral(4, 4, array); 
}
