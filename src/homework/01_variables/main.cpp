//write include statements
#include<iostream>
#include "variables.h"

//write namespace using statement for cout
using std::cin; using std::cout;


int main()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;

	int result;
	result = multiply_numbers(num);
	cout << "This is the result: "<< result << "\n";
	
	int num1 = 4;
	result = multiply_numbers(num1);
	cout << "This is the result: "<< result << "\n";

	return 0;
}
