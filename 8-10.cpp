/*Write a program that uses two identical arrays of just eight integers. It should display
the contents of the first array, then call a function to sort the array using an ascending
order bubble sort modified to print out the array contents after each pass of the sort.
Next, the program should display the contents of the second array, then call a function
to sort the array using an ascending order selection sort modified to print out the array
contents after each pass of the sort.*/

#include<iostream>
using namespace std;


void show(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
}

void bubbleSort(int array[], int size)
{
	bool swap;
	int temp;

	// pass is called count
	do
	{
		swap = false;
		for (int count = 0; count < size - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
			cout << "After " << count << " count\n";
			cout << array[count] << " " << endl;
		}
	} while (swap);
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


int main()
{
	const int SIZE = 8;
	int array1[SIZE] = { 7,2,3,8,9,1 };
	int array2[SIZE] = { 7,2,3,8,9,1 };

	cout << "The unsorted array 1 and array 2: \n";
	show(array1, SIZE);
	show(array2, SIZE);
	cout << endl;

	selectionSort(array1, SIZE);
	selectionSort(array2, SIZE);
	bubbleSort(array1, SIZE);
	bubbleSort(array2, SIZE);

	cout << "The sorted array 1 and array 2: \n";
	show(array1, SIZE);
	show(array2, SIZE);



	return 0;
}

