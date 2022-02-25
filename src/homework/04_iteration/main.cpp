//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char yesser = 'y';
	int option;

	display_menu();
	option = menu_runner();


    do
    {
		switch (option)
   		{
        	case 1:
				int num;
				int sum;
				cout << "Please enter a number. \n";
				cin >> num;
            	sum = factorial(num);
				cout<< sum;
				yesser = 'y';
            	break;
			

        	case 2:
				int out;
				int num1;
				int num2;
				cout << "Please enter the first number. \n";
				cin >> num1;
				cout << "Please enter the second number number. \n";
				cin >> num2;
            	out = gcd(num1, num2);
				cout << out;
				yesser = 'y';
            	break;
			

        	case 3:
            	cout << "Do you want to end this program? (Enter y for yes)\n";
            	cin >> yesser;
            	if (yesser == 'y')
            	{
                	cout << "The program is now exisiting. \n";
            	}
            	else
            	{
                	cout << "Please enter a option. \n";   
					cin >> option;            
            	}
		
		
		}   
    } while (yesser != 'y');
	return 0;   
}