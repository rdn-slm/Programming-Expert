/*Name: Raden Salma Humaira binti Muhammad Mun'im
Matric No.:  A23CS0264
Event: Programming Expert
Question 27
*/

#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;

int main()
{
	// initialize data
	cout << "Ratatouille Mobile Service Provider\n";
	cout << "...................................................\n";
	cout << "Minute of Month Calculator\n\n";

	const double limit = 1383840;
	const int hour = 60;
	string month = "\0";
	int monthNum = 0;
	int day = 0;
	double minute = 0.0;
	double minutesCount = 0.0;

	cout << "Reference:\n\n";
	cout << "Month  Days  Hours\n";
	cout << setw(5) << "____________________________\n";
	cout << setw(5) << "January(Jan)   31  744\n";
	cout << setw(5) << "February(Feb)  28  672\n";
	cout << setw(5) << "March(Mar)     31  74\n";
	cout << setw(5) << "April(Apr)     30  720\n";
	cout << setw(5) << "May            31  744\n";
	cout << setw(5) << "June(Jun)      30  720\n";
	cout << setw(5) << "July(Jul)      31  744\n";
	cout << setw(5) << "August(Aug)    31  744\n";
	cout << setw(5) << "September(Sep) 30  720\n";
	cout << setw(5) << "October(Oct)   31 744\n";
	cout << setw(5) << "November(Nov)  30 720\n";
	cout << setw(5) << "December(Dec)  31 744\n";
	cout << setw(5) << "____________________________\n";

	cout << "\n\n\nWhich month do you want to calculate? (Shortform of the month): ";
	cin >> month;
	
    // initialize month in string to lowercase

    cout << "How many minutes? ";
    cin >> minute;
    //------------------------------------------------------------------
    if (month == "Jan")
    {
	    monthNum = 1;
		minutesCount = minute*hour*31*744;
    }
	
	else if (month == "Feb")
	{
	    monthNum = 2;
		minutesCount = minute*hour*28*672;
	}
	else if (month == "Mar")
	{
	    monthNum = 3;
		minutesCount = minute*hour*31*744;
	}
	else if (month =="Apr")	
	{
	    monthNum = 4;
		minutesCount = minute*hour*30*720;
	}
	else if (month == "May")	
    {
	    monthNum = 5;
		minutesCount = minute*hour*31*744;
    }
	else if (month == "Jun")	
    {
	    monthNum = 6;
		minutesCount = minute*hour*30720;
    }
	else if (month == "Jul")	
    {
	    monthNum = 7;
		minutesCount = minute*hour*31*744;
    }
	else if (month == "Aug")
	{
	    monthNum = 8;
		minutesCount = minute*hour*31*744;
	}
	else if (month == "Sep")	
    {
	    monthNum = 9;
		minutesCount = minute*hour*30720;
    }
	else if (month == "Oct")	
	{
	    monthNum = 10;
		minutesCount = minute*hour*31*744;
	}
	else if (month == "Nov")
	{
	    monthNum = 11;
		minutesCount = minute*hour*30*720;
	}
	else if (month == "Dec")	
    {
	    monthNum = 12;
		minutesCount = minute*hour*31*744;
	}
	else
	{
	    cout << "Babai\n";
		return 0;
	}
	
    if (monthNum >= 1 && monthNum <= 12 )
	{
	    cout << "\n\n\nJeng jeng jeng!!!!!!!! The magic is doneth:\n";
	    cout << "The minutes for month " << month << " is " << static_cast<int>(minutesCount) << "." << endl;
	    cout << "\nThank you and see ya when I see ya\n --Rat\n";
	}
	else
	    cout << "Okay babai\n";
	
	return 0;
}