// Name: Raden Salma Humaira binti Muhammad Mun'im
// Matric No: A23CS0264
// Assessment: PE

#include<iostream>
#include<string>

using namespace std;

int main()
{
    const int SCORES = 4;
    const int STUDENTS = 5;
    string student[STUDENTS];

    //string lowestName = " ";
    //double lowestAvg = 0.0;

    double scores1[SCORES];
    double scores2[SCORES];
    double scores3[SCORES];
    double scores4[SCORES];
    double scores5[SCORES];

    double avg[STUDENTS];

    char grade[STUDENTS];

    for (int i = 1; i <= 5; i++)
    {
        cout << "#" << i << " Student name: ";
        cin >> student[i];

        for (int j = 0; j < SCORES; j++)
        {
            if (i = 1)
            {
                cout << "#" << j << " Enter the score: ";
                cin >> scores1[j];

                if (scores1[j] < 0 && scores1[j] > 100)
                {
                    cout << "Enter the score correctly: ";
                    cin >> scores1[j];
                }

                avg[i] += scores1[j];
                avg[i] = avg[i] / SCORES;
                if (avg[i] >= 90 || avg[i] <= 100)
                    grade[i] = 'A';
                else if (avg[i] >= 80 || avg[i] <= 89)
                    grade[i] = 'B';
                else if (avg[i] >= 70 || avg[i] <= 79)
                    grade[i] = 'C';
                else if (avg[i] >= 60 || avg[i] <= 69)
                    grade[i] = 'D';
                else
                    grade[i] = 'F';
            }

            else if (i = 2)
            {
                cout << "#" << j << " Enter the score: ";
                cin >> scores2[j];

                if (scores2[j] < 0 && scores2[j] > 100)
                {
                    cout << "Enter the score correctly: ";
                    cin >> scores2[j];
                }
                avg[i] += scores2[j];
                avg[i] = avg[i] / SCORES;
                if (avg[i] >= 90 || avg[i] <= 100)
                    grade[i] = 'A';
                else if (avg[i] >= 80 || avg[i] <= 89)
                    grade[i] = 'B';
                else if (avg[i] >= 70 || avg[i] <= 79)
                    grade[i] = 'C';
                else if (avg[i] >= 60 || avg[i] <= 69)
                    grade[i] = 'D';
                else
                    grade[i] = 'F';
            }


            else if (i = 3)
            {
                cout << "#" << j << " Enter the score: ";
                cin >> scores3[j];

                if (scores3[j] < 0 && scores3[j] > 100)
                {
                    cout << "Enter the score correctly: ";
                    cin >> scores3[j];
                }
                avg[i] += scores3[j];
                avg[i] = avg[i] / SCORES;
                if (avg[i] >= 90 || avg[i] <= 100)
                    grade[i] = 'A';
                else if (avg[i] >= 80 || avg[i] <= 89)
                    grade[i] = 'B';
                else if (avg[i] >= 70 || avg[i] <= 79)
                    grade[i] = 'C';
                else if (avg[i] >= 60 || avg[i] <= 69)
                    grade[i] = 'D';
                else
                    grade[i] = 'F';

            }
            else if (i = 4)
            {
                cout << "#" << j << " Enter the score: ";
                cin >> scores4[j];

                if (scores4[j] < 0 && scores4[j] > 100)
                {
                    cout << "Enter the score correctly: ";
                    cin >> scores4[j];
                }
                avg[i] += scores4[j];
                avg[i] = avg[i] / SCORES;
                if (avg[i] >= 90 || avg[i] <= 100)
                    grade[i] = 'A';
                else if (avg[i] >= 80 || avg[i] <= 89)
                    grade[i] = 'B';
                else if (avg[i] >= 70 || avg[i] <= 79)
                    grade[i] = 'C';
                else if (avg[i] >= 60 || avg[i] <= 69)
                    grade[i] = 'D';
                else
                    grade[i] = 'F';
            }

            else
            {
                cout << "#" << j << " Enter the score: ";
                cin >> scores5[j];

                if (scores5[j] < 0 && scores5[j] > 100)
                {
                    cout << "Enter the score correctly: ";
                    cin >> scores5[j];
                }
                avg[i] += scores5[j];
                avg[i] = avg[i] / SCORES;
                if (avg[i] >= 90 || avg[i] <= 100)
                    grade[i] = 'A';
                else if (avg[i] >= 80 || avg[i] <= 89)
                    grade[i] = 'B';
                else if (avg[i] >= 70 || avg[i] <= 79)
                    grade[i] = 'C';
                else if (avg[i] >= 60 || avg[i] <= 69)
                    grade[i] = 'D';
                else
                    grade[i] = 'F';
            }

            //if (lowestAvg > avg[i])
            //{
            //    lowestAvg = avg[i];
            //   lowestName = student[i];
            //}

        }
            cout << "\nStudent # " << student[i] << " : AVERAGE- " << avg[i] << " GRADE- " << grade[i];
            //cout << "\nLowest Score from : " << lowestName << " with the average of " << lowestAvg << endl;
        }

        return 0;
    }