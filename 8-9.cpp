/*Write a program that uses two identical arrays of at least 20 integers. It should call
a function that uses the bubble sort algorithm to sort one of the arrays in ascending
order. The function should keep a count of the number of exchanges it makes. The
program then should call a function that uses the selection sort algorithm to sort the
other array. It should also keep count of the number of exchanges it makes. Display
these values on the screen.*/

#include<iostream>
#include<string>
using namespace std;

const int SIZE = 20;

int bubbleSort(int array[], int size)
{
	bool swap = false;
	int temp;
	int count = 0;
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
			count++;
			cout << "The count for sorting is now: " << count + 1 << endl;
		}
	} while (swap);

	return array[size];
}

void showArray(const int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}

int selectionSort(int array[], int size)
{
	int start, minIndex, minVal;
	int count = 0;

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
			count++;
			cout << "The count for sorting is now: " << count + 1 << endl;
		}
		array[minIndex] = array[start];
		array[start] = minVal;
	}
	return array[size];
}


int main()
{
	int position1;
	int position2;
	int target = 34;

	int arr1[SIZE] = {101, 22, 23, 54, 1323, 53, 232, 41, 24, 11,
					232, 4, 53, 25, 11, 23, 34, 335, 242, 11};

	int arr2[SIZE] = { 101, 22, 23, 54, 1323, 53, 232, 41, 24, 11,
					232, 4, 53, 25, 11, 23, 34, 335, 242, 11 };


	position1 = bubbleSort(arr1, SIZE);
	position2 = selectionSort(arr2, SIZE);

	showArray(arr1, SIZE);
	showArray(arr2, SIZE);

	return 0;

}
