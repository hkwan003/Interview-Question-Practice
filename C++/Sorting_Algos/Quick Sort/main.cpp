#include <iostream>

using namespace std;

void quickSort(int arr[], int left, int right)
{
	int i = left;
	int j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];
	cout << endl;
	cout << "Pivot: " << pivot << endl;

	//partition
	while(i <= j)
	{
		while(arr[i] < pivot)
		{
			i++;
		}
		while(arr[j] > pivot)
		{
			j--;
		}
		if(i <= j)
		{
            swap(arr[i], arr[j]);
			cout << endl;
			cout << "argument 1: " << arr[j] << endl;
			i++;
			j--;
		}
	}

	//recursion
	if(left < j)
	{
		quickSort(arr, left, j);
	}
	if(i < right)
	{
		quickSort(arr, i, right);
	}
}



int main()
{
	int foo[6] = {4, 3, 6, 7, 23, 7};
	quickSort(foo, 0, 5);

	for(int x = 0; x < 6; x++)
	{
		cout << foo[x] << " ";
	}
	cout << endl;

}
