//8-2
#include<iostream>
#include<string>
using namespace std;

int binarySearch(const int[], int, int);
const int SIZE = 20;

int main()
{
	int id[SIZE] = { 101, 232, 23, 54, 1323, 53, 232, 41, 24, 131,
					232, 4, 53, 25, 11, 23, 54, 335, 242, 11,
					21, 44, 56, 88, 44, 2422, 22, 441, 600, 20 };
	int results;
	int empId;

	cout << "enter the employee id you wish to search for: ";
	cin >> empId;

	results = binarySearch(id, SIZE, empId);
	if (results == -1)
		cout << "that number does not exist in the array\n";
	else {
		cout << "that id is found at element " << results;
		cout << " in the array\n";

	}
	return 0;

}

int binarySearch(const int arr, int size, int val)
{
	int first = 0;
	int last = size - 1;
	int middle;
	int position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (arr[middle] == value);
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}