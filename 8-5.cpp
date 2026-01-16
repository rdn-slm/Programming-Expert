// 8-5
#include<iostream>
using namespace std;

void selectionSort(int[], int);
void showArray(const int[], int);

int main()
{
	const int SIZE = 6;
	int values[SIZE] = { 5,7,2,8,9,1 };

	cout << "the unsorted values are\n";
	showArray(values, SIZE);

	selectionSort(values, SIZE);

	cout << " the sorted values are\n";
	showArray(values, SIZE);
	return 0;
}

void selectionSort(int array[], int size)
{
	int start, minIndex, minVal;
	for (start = 0; start < size - 1; start++)
	{
		minIndex = start;
		minVal = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minVal)
			{
				minVal = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[start];
		array[start] = minVal;
	}
}

void showArray(const int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}