#include <iostream>

using namespace std;

void reorder(char A[], int B[], int size)
{
	for(int x = 0; x < size; x++)
	{
		if(x != B[x])
		{
			int temp = B[x];
			cout << temp << endl;
			swap(B[x], B[temp]);
			swap(A[x], A[temp]);
			for(int j = 0; j < size; j++)
			{
				cout << B[j];
			}
			cout << endl;
			for(int j = 0; j < size; j++)
			{
				cout << A[j];
			}
			cout << endl;
		}
	}


}

int main()
{
	char arr1[] = {'C', 'D', 'E', 'F', 'G'};
	int arr2[] = {3, 0, 4, 1, 2};
	int size = 5;
	reorder(arr1, arr2, size);
}






