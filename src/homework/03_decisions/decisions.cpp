#include<iostream>
using std::cout;
#include "decisions.h"

int get_letter_grade_using_if(int num_grade)
{
	char grade;
	if (num_grade <= 100 && num_grade >= 0)
	{
		if (num_grade >= 90)
		{
	 	grade = 'A';
		}
		else if(num_grade >= 80)
		{
			grade = 'B';
		}
		else if(num_grade >= 70)
		{
			grade = 'C';
		}
		else if(num_grade >= 60)
		{
			grade = 'D';
		}	
		else if(num_grade >= 0)
		{
			grade = 'F';
		}
		return grade;
	} 
	else 
	{
		cout << "You did not enter a score 1-100. \n";
	}
}

int get_letter_grade_using_switch(int num_grade)
{
	char grade;
	switch(num_grade)
	{
		case 90 ... 100: 
			grade = 'A'; 
			break; 
		case 80 ... 89:
			grade = 'B';
			break;
		case 70 ... 79:
			grade = 'C';
			break;
		case 60 ... 69:
			grade = 'D';
			break;
		case 0 ... 59:
			grade = 'F';
			break;
		default: cout<< "You did not enter a score 1-100. \n";
	}
	return grade;
}