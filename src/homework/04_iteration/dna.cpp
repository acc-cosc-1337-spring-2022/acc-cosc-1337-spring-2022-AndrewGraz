#include "dna.h"
#include<iostream>
using std::cout; using std::cin;

int factorial(int num)
{
    int sum = 1;
    while(num >0)
    {
        sum = num * sum;
        num -=1;
    }
    return sum;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if (num1 > num2)
        {
            num1 -= num2;         
        }
        else if (num1 < num2)
        {
           num2 -= num1;
        }
    }
    return num1; 
}

void display_menu()
{
    cout << "main \n";
	cout << "";
	cout << "1-Factorial \n";
	cout << "2-Greatest Common Divisor \n";
	cout << "3-Exit \n";
}

int menu_runner()
{
    cout << "Please enter the option \n";
	int option;
	char repeat;
	repeat = 'y';
	while (repeat == 'y')
	{
    	cin >> option;
		if (option != 1 && option != 2 && option != 3)
		{
			cout << "Please enter a option. \n";
			repeat = 'y';
		}
		else
		{
			repeat = 'n';
		}
	}
    return option;
}

