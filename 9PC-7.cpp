#include<iostream>

using namespace std;

void arrSelectSort(int* [], int);
// sort in descending order
void showArray(const int[], int);
void showArrPtr(int* [], int);

int main()
{
    const int NUM_DONATIONS = 15;

    int donations[NUM_DONATIONS];

    cout << "Please input the donations for 15: \n";
    for (int count = 0; count < NUM_DONATIONS; count++)
        cin >> donations[count];

    int* arrPtr[NUM_DONATIONS] =
    {
        nullptr, nullptr, nullptr, nullptr, nullptr,
        nullptr, nullptr, nullptr, nullptr, nullptr,
        nullptr, nullptr, nullptr, nullptr, nullptr
    };

    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];

    arrSelectSort(arrPtr, NUM_DONATIONS);

    cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(arrPtr, NUM_DONATIONS);

    cout << "The donations, sorted in original order are: \n";
    showArray(donations, NUM_DONATIONS);
    return 0;
}


void arrSelectSort(int* arr[], int size)
{
    int startScan, minIndex;
    int* maxElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        maxElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) > *maxElem)
            {
                maxElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = maxElem;
    }
}

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr([count]) << " ";
    cout << endl;
}
