#include<iostream>
#include<string>
using std::cout; using std::cin; using std::string;
//write include statements
#include "decisions.h"


int main() 
{
	int option;
	cout << "main \n";
	cout << "";
	cout << "1-Letter grade using if \n";
	cout << "2-Letter grade using switch \n";
	cout << "3-Exit \n";
	cout << "Please enter the option \n";
	cin >> option;
	if (option == 1 || option == 2)
	{
		int num_grade;
		cout << "Please enter a test score from 1-100. \n";
		cin >> num_grade;
		char grade;
		if (option == 1)
		{
			grade = get_letter_grade_using_if(num_grade);
			cout << "Here is your numerical grade \n";
			cout << grade;
			cout << "\n";
		}
		else if (option == 2)
		{

			grade = get_letter_grade_using_switch(num_grade);
			cout << "Here is your numerical grade \n";
			cout << grade;
			cout << "\n";
		}
	}
	else if (option == 3)
	{
		return 0;
	}
}
