/*
Name: Raden Salma Humaira binti Muhammad Mun'im
Matric No.:  A23CS0264
Event: Programming Expert
Question 23
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // initializing data
    int ch;
    string shape = "\0";
    double radius =0.0, length=0.0, width=0.0, base=0.0, height=0.0;
    double area= 0.0;

    // menu section
    cout << "This is a Geometry Calculator!\n";
    cout << "Menu:\n\n";
    cout << "1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n3. Calculate the Area of a Triangle\n4. Quit\n\n";

    cout << "Enter your choice (1-4): ";
    cin >> ch;
    
    // switching cases
    switch (ch)
    {
    case 1:
            shape = "Circle";
            cout << "\n*Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0.0)
                cout << "Do no enter negative!!! What's wrong with you.\n";
            area = 3.14159*radius*radius;
            break;
    case 2:
            shape = "Rectangle";
            cout << "\n*Enter the length of the rectangle: ";
            cin >> length;
            cout << "\n*Enter the width of the rectangle: ";
            cin >> width;
            if (width < 0.0 ||length < 0.0 )
                cout << "Do no enter negative!!! What's wrong with you.\n";
            area = length*width; 
            break;

    case 3:
            shape = "Triangle";
            cout << "\n*Enter the length of triangle's base: ";
            cin >> base;
            cout << "\n*Enter the height of the triangle: ";
            cin >> height;
            if (base < 0.0 || height < 0.0 )
                cout << "Do no enter negative!!! What's wrong with you.\n";
            area = height*base*0.5;
            break;

    case 4:
            cout << "Bruh, really. Why would you use this calculator!\n";
            exit;
            break;

    }
    cout << "\n\n******************Result****************\n";
    if(ch==1||ch==2||ch==3)
    {
    cout << "The area of the " << shape << " is: " << setprecision(2) << fixed << area << endl << endl;
    cout << "Thank you for using our calculator!\n";
    }
    return 0;
}
