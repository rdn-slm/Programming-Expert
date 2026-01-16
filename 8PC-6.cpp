// selection sort
// Name: Raden Salma Humaira binti Muhammad Mun'im
// Matric No: A23CS0264
// Assessment: PE

#include<iostream>
#include<string>
using namespace std;

void selectionSort(string[], int);
void showArray(const string[], int);

int main()
{
    const int NUM_NAMES = 20;
    string values[NUM_NAMES] =
    { "Collins, Bill", "Smith, Bart", "Allen, Jim",
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
    "Taylor, Terri", "Johnson, Jill", "Allison Jeff", "Looney Joe",
    "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob",
    " Rutherford, Greg", "Javens, Renee", "Harrison, Rose",
    "Setzer, Cathy", "Pike, Gordon","Holland, Beth" };


    cout << "The unsorted values are: \n";
    showArray(values, 20);

    // sorting 
    selectionSort(values, 20);

    cout << "The sorted values are: ";
    showArray(values, 20);
    return 0;
}

void selectionSort(string array[], int size)
{
    int startScan, minIndex;
    string minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

void showArray(const string array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}
