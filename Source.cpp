#include<iostream>;
using namespace std;
int main()
{
        double salary, salaryincrement, years, salaryincrementpercentage, performancebonuspercentage,performancebonus, updatedsalary;
		string rating;
			cout << "Enter the salary of the employee: ";
			cin >> salary;
			cout << "Enter years for salary adjustment: ";
			cin >> years;
			for (int j = 1; j <= years; j++)
			{
				salaryincrement = salary * 0.05;
				cout << "Rating:(yes/no) " << endl;
				cin >> rating;
				cout << "Incremented salary: " << salaryincrement << endl;
				salary = salary + salaryincrement;


				if (rating == 'yes')
				{
					performancebonus = salary * 0.02;

				}
				else
				{
					cout << "Invalid";
				}
				updatedsalary = salary + salaryincrement + performancebonus;
				cout << "Year" << years << endl;
				cout << "updated salary: " << updatedsalary << endl;
				salary = updatedsalary;
			}
			return 0;
		}