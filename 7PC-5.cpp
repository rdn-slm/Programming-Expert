// Name: Raden Salma Humaira binti Muhammad Mun'im
// Matric No: A23CS0264
// Assessment: PE
#include<iostream>
#include<string>
using namespace std;

int main()
{
    const int MONKEY = 3;
    const int DAY = 5;
    int monkey[MONKEY][DAY];

    int leastFood = 0, greatestFood = 0;
    double avg = 0.0;
    cout << "Local Zoo wants to track the pounds from food consumed by the three monkeys\n\n";


        for (int i = 1; i <= MONKEY; i++)
        {
            for (int j = 1; j <= DAY; j++)
            {
                cout << "Please enter the pounds of food for monkey " << i << ": ";
                cin >> monkey[i][j];

                // input validation
                if (monkey[i][j] < 0)
                    cin >> monkey[i][j];

                if (leastFood > monkey[i][j])
                {
                    leastFood = monkey[i][j];
                }

                if (greatestFood < monkey[i][j])
                {
                    greatestFood = monkey[i][j];
                }

                avg += monkey[i][j];
                avg /= MONKEY;
            }

        }

    cout << "=============== REPORT ===================\n";
    cout << "Average amount by the family : " << avg;
    cout << "The name who eat least amount of food: " << leastFood;
    cout << "The name who eat the greatest amount: " << greatestFood;


    return 0;
}