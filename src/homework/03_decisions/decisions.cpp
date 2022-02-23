#include<iostream>
#include<iterator>
using std::cout; using std::string;
#include "decisions.h"

string get_letter_grade_using_if(int num_grade)
{
	if (num_grade >= 90)
	{
		return "A";
	}
	else if(num_grade >= 80)
	{
		return "B";
	}
	else if(num_grade >= 70)
	{
		return "C";
	}
	else if(num_grade >= 60)
	{
		return "D";
	}	
	else if(num_grade >= 0)
	{
		return "F";
	}
	
}

string get_letter_grade_using_switch(int num_grade)
{
	switch(num_grade)
	{
		case 90 ... 100: 
			return "A";
			break; 
		case 80 ... 89:
			return "B";
			break;
		case 70 ... 79:
			return "C";
			break;
		case 60 ... 69:
			return "D";
			break;
		case 0 ... 59:
			return "F";
			break;
	}
}