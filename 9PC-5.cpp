#include<iostream>
#include<iomanip>
using namespace std;

int doSomething(int* x, int* y)
{
    int sum = 0;

    int* ptr1 = nullptr, ptr2 = nullptr;

    ptr1 = &x;
    ptr2 = &y;

    int *temp = &x;
    *ptr1 *= 10;
    ptr2 *= 10;

    sum = &ptr2 + &ptr1;

    return sum;
}

int main()
{
    int num1 = 10, num2 = 5;
    int result;
    int count = 0;

    int *a = &num1;
    int *b = &num2;

    cout << "The numbers before: \n";
    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    result = doSomething(a, b);

    cout << "The numbers after: \n";
    cout << "Number 1 : " << num1 << endl;
    cout << "Number 2 : " << num2 << endl;

    cout << "\nResult: ";
    cout << result << endl;

    return 0;
}
