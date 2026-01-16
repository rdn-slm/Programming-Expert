// Name: Raden Salma Humaira binti Muhammad Mun'im
// Matric No: A23CS0264
// Assessment: PE


#include<iostream>
using namespace std;

int binarySearch(const int[], int, int);
const int SIZE = 20;

int main()
{
    // ARRAYS
    int idNums[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
                        234, 289, 296, 310, 319, 388, 394,
                    417, 429, 447, 521, 536, 600 };

    int results;
    int empID;

    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;

    results = binarySearch(idNums, SIZE, empID);

    if (results == -1)
        cout << "That number does not exist in the array.\n";

    else {
        cout << "That ID is found at element " << results;
        cout << " in the array.\n";
    }
    return 0;
}

int binarySearch(const int array[], int size, int value)
{
    int first = 0,
        last = size - 1,
        middle = 0,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        cout << array[first] << " is being compared to " << value << endl;

        middle = (first + last) / 2;
        if (array[middle] == value)
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
