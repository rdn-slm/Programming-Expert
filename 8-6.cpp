// PC 8-2
#include<iostream>
#include<String>
using namespace std;

void searchLinear(const int arr[], int size, int val)
{
	int index = 0;
	int pos = -1;
	bool found = false;

	while (!index < size)
	{
		if (arr[index] == val)
		{
			found = true;
			pos = index;
			cout << "your number won the lottery!\n";
		}		
	}
	index++;

	if (found)
		cout << "sorry you didn't win the lottery\n";
	else
		cout << "your number won the lottery!\n";

}


int main()
{
	int lotnum;
	const int SIZE = 8;
	int array[SIZE] = { 13579, 26791, 26792, 33445, 55555,
						62483, 77777, 86438,  };

	cout << "Lottery winning ticket (nauzubillah)\n";
	cout << "takpe nak belajar je\n\n";

	cout << "input that lottery number with 5 digits (eg: 22222): ";
	cin >> lotnum;

	searchLinear(array, SIZE, lotnum);

	return 0;

}
