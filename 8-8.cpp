//PC 8-8
/*
Write a program that has an array of at least 20 integers. It should call a function that
uses the linear search algorithm to locate one of the values. The function should keep
a count of the number of comparisons it makes until it finds the value. The program
then should call a function that uses the binary search algorithm to locate the same
value. It should also keep count of the number of comparisons it makes. Display these
values on the screen.
*/

#include<iostream>
using namespace std;


int searchLinear(const int arr[], int size, int val)
{
	int index = 0;
	int pos = -1;
	bool found = false;
	int compare =0 ;

	while (!index < size)
	{
		if (arr[index] == val)
		{
			found = true;
			pos = index;
		}
		else
			cout << "num of comparison done " << compare + 1 << endl;
	}
	index++;

	cout << " num of comparison total: " << compare + 1 << endl;
	return pos;
}


int searchBinary(const int array[], int numElems, int value)
{
	int first = 0;
	int last = numElems - 1;
	int mid;
	int position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		mid = (first + last) / 2;
		if (array[mid] == value)
		{
			found = true;
			position = mid;
		}
		else if (array[mid] > value)
			last = mid + 1;
		else
			first = mid + 1;
	}
	return position;
}

int main()
{
	int array[20]
		= { 1,2,3,4,5,6,7,8,9,10,
		30,50,4,96,33,22,33,55,88,55
	};

	int position1 = searchLinear(array, 20, 10);
	int position2 = searchBinary(array, 20, 10);

	cout << "The last position for Linear Search is " << position1 << endl;
	cout << "The last position for Binary Search is " << position2 << endl;

	return 0;
}




