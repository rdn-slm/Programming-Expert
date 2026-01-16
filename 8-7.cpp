
#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

void initVectors(vector<int>&, vector<int>&, vector<double>&);
void calc(vector<int>, vector<double>, vector<double>);
void showOrder(vector<double>, vector<int>);
void dualSort(vector<int>&, vector<double>&);
void showTots(vector<double>, vector<int>);

int main()
{
	vector<int> id;
	vector<int> units;
	vector<double> prices;
	vector<double> sales;

	initVectors(unit, units, prices);

	calc(units, prices, sales);

	dualSort(id, sales);
	cout << fixed << showpoint << setprecision(2);

	showOrder(sales, id);

	showTots(sales, units);

	return 0;
}
void initVectors(vector<int>& id, vector<int>& units, vector<double>& prices)
{
	for (int value = 914; value <= 922; value++)
		id.push_back(value);

	units.push_back(842);
	units.push_back(417);
	units.push_back(127);
	units.push_back(514);
	units.push_back(427);
	units.push_back(269);
	units.push_back(127);
	units.push_back(97);
	units.push_back(492);
	units.push_back(212);

	prices.push_back(12.95);
	prices.push_back(14.95);
	prices.push_back(16.95);
	prices.push_back(18.95);
	prices.push_back(20.95);
	prices.push_back(22.95);
	prices.push_back(24.95);
	prices.push_back(28.95);


}

void calc(vector<int> units, vector<double> prices, vector<double>& sales)
{
	for (int index = 0; index < units.size(); index++)
		sales.push_back(units[index] * prices[index]);
}

void dualSort(vector<int>& id, vector<double>& sales)
{
	int startScan, max, temp, size;
	double max;

	size = id.size();
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		max = startScan;
		max = sales[startScan];
		temp = id[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (sales[index] > max)
			{
				max = sales[index];
				temp = id[index];
				max = index;
			}

		}
		sales[max] = sales[startScan];
		id[max] = id[startScan];
		sales[startScan] = max;
		id[startScan] = temp;;
	}
}

void showOrder(vector<double> sales.vector<int> id)
{
	for (int index = 0; index < id.size(); index++)
	{
		cout << id[index] << "\t\t";
		cout << setw(8) << sales[index] << endl;
	}
	cout << endl;
}

void showTot(vector<double> sales, vector<int> units)
{
	int totalUnits = 0;
	double totalSales = 0.0;
	for (int index = 0; index < units.size(); index++)
	{
		totalUnits = +units[index];
		totalSales = +sales[index];
	}
	cout << totalUnits << endl;

	cout << totalSales << endl;

}