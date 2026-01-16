#include<iostream>
#include<string>

using namespace std;

void display(int[], int, string);
void bubbleSort(int[], int);
void swap(int&, int&);
void selectionSort(int[], int);

int main()
{
	const int arraysize = 8;
	int array1[arraysize] = { 10,20,40,50,60,30,90,80 };
	int array2[arraysize] = { 10,20,40,50,60,30,90,80 };

	cout << "Bubble Sort...\n";
	display(array1, arraysize, "Unsorted: \n");
	bubbleSort(array1, arraysize);
	display(array1, arraysize, "Sorted: \n");

	cout << "Selection Sort...\n";
	display(array1, arraysize, "Unsorted: \n");
	selectionSort(array1, arraysize);
	display(array1, arraysize, "Sorted: \n");


	return 0;
}

void display(int arr[], int num, string sortorunsort)
{
	cout << sortorunsort << endl;
	for (int i = 0; i < num; i++)
		cout << arr[i] << " ";
	cout << endl;

}


	void bubbleSort(int array[], int ARRAY_SIZE)
	{
		int max_element,
			index,
			pass = 0;

		// <-----------| 19
		for (max_element = ARRAY_SIZE - 1; max_element > 0; max_element--)
		{
			// 0 |------------->
			for (index = 0; index < max_element; index++)
			{   // 9, 2
				if (array[index] > array[index + 1])
					swap(array[index], array[index + 1]);
			}

			cout << "\nPass #" << pass + 1 << ": --> ";
			for (int i = 0; i < ARRAY_SIZE; i++)
				cout << array[i] << " ";

			pass++;
		}
		cout << endl << endl;

}


void swap(int& a, int& b)
{
	int temp;
	// temp takes a
	temp = a;
	a = b;
	// b takes temp
	b = temp;

}

void selectionSort(int array[], int ARRAY_SIZE)
{
	int min_index,
		min_value,
		pass = 0;

	// 0 -> 18
	for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
	{
		min_index = start_index;
		min_value = array[start_index];

		// 1 -> 19
		for (int index = start_index + 1; index < ARRAY_SIZE; index++)
		{
			if (array[index] < min_value)
			{
				min_index = index;
				min_value = array[index];
			}
		}
		swap(array[min_index], array[start_index]);

		cout << "\nPass #" << (pass + 1) << ": --> ";
		for (int i = 0; i < ARRAY_SIZE; i++)
			cout << array[i] << " ";

		pass++;
	}
	cout << endl;
}