//8-3
#include<iostream>
#include<string>
using namespace std;

const int NUM_PROD = 9;
const int MIN_NUM = 914;
const int MAX_NUM = 922;


int getProdNum();
int binarySearch(const int[], int, int);

void display(const string[], const string[], const double[], int);

int main()
{
	int id[NUM_PROD] = { 914, 915, 916, 917, 918, 919, 920, 921, 922 };

	string title[NUM_PROD]
		=
	{ "Six Steps to Leadership",
	"Six Steps to Leadership",
		"Roads to eXCELLENCE",
		"Six foots to Leadership",
		"Six LIME to Leadership",
		"Six FUTURE to Leadership",
		"Six PROnto to Leadership"
		"Six humming to Leadership",
		"Six Lessons to Leadership",
	};

	string desc[NUM_PROD]
	{
		"Book", " Audio CD", "DVD",
		"Book",
		"Audio CD", "DVD","Book",
		" Audio CD", "DVD",

	};

	double prices[NUM_PROD] = {
		12.95, 14.95,
		14.95, 14.95 ,
		14.95 , 14.95 ,
		14.95 , 14.95 ,
		14.95, 14.95 };

	int prodNum;
	int index;
	char again;

	do
	{
		prodNum = getProdNum();
		index = binarySearch(id, NUM_PROD, prodNum);

		if (index == 1)
			cout << "That product number is not found\n";
		else
			display(title, desc, prices, index);

		cout << "would you like to talk a look at another product? (Y/N)\n";
		cin >> again;
	} while (again == 'y' || again == 'Y');
return 0;
}

int getProdNum()
{
	int prod;
	cout << "Enter the product number: ";
	cin >> prod;

	while (prod< MIN_NUM || prod > MAX_NUM)
	{
		cout << "enter a number in the range of " << MIN_NUM << " through " << MAX_NUM << "\n";
		cin >> prod;
	}

	return prod;
}

int binarySearch(const int array[], int numElems, int value)
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


void display(const string title[], const string desc[], const double price[], int index)
{
	cout << " title: " << title[index] << endl;
	cout << " description" << desc[index] << endl;
	cout << "price " << price[index] << endl;
}
