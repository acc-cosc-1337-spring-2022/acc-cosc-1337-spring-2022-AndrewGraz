//write include statements
#include<string>
#include<iostream>
#include "sequence.h"

//using statements for cin cout
using std::cout; using std::cin;

int main()
{
	int option;
	char yesser = 'n';

	do 
	{
		display_menu();
		option = menu_runner();
		yesser = runner_of_main(option, yesser);

	} while (yesser != 'n');
	return 0;
}
 
