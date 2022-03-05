//write include statements 
#include "sequence.h"
#include <iostream>
#include <iomanip>
using std::cout; using std::cin;

//get_gc_content function code
double get_gc_content(const std::string dna)
{
    double count = 0;
    double num_of_gc = 0;
    for(char ch: dna)
    {
        count += 1;
        if (ch == 'C' || ch == 'G')
        {
            num_of_gc += 1;
        }
    }
    return (num_of_gc/count);
}

//get_dna_complement function code
std::string get_dna_complement(std::string dna)
{
    std::string reverse_dna;
    int length;
    reverse_dna = reverse_string(dna);
    std::string complement;
    length = dna.length();

    for(int i = 0; i < length; i += 1)
    {
        if (reverse_dna[i] == 'A')
        {
            complement += 'T';
        }
        if (reverse_dna[i] == 'T')
        {
            complement += 'A';
        }
        if (reverse_dna[i] == 'C')
        {
            complement += 'G';
        }
        if (reverse_dna[i] == 'G')
        {
            complement += 'C';
        }
    }
    return complement;
}

//reverse_string function code
std::string reverse_string(std::string dna)
{
    std::string stringreverse;
    int length;
    length = dna.length()-1;

    for(int i = length; i >= 0; i -= 1)
    {
        stringreverse += dna[i];
    }
    return stringreverse;
}

//display_menu function code
void display_menu()
{
    cout << "main \n";
	cout << "";
	cout << "1-Get GC Content \n";
	cout << "2-Get DNA Complement \n";
	cout << "3-Exit \n";
}

//menu_runner function code
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

//dna_in function code
std::string dna_chec_in()
{
    std:: string dna; 
    bool dna_string = false;
    while (dna_string == false)
    {
        cout << "Please enter the DNA strand, only A,T,G, or C: \n";
	    cin >> dna;
        int length = dna.length();
        for(int i = 0; i < length; i += 1)
        {
            if (dna[i] == 'A' || dna[i] == 'T' || dna[i] == 'G' || dna[i] == 'C')
            {
                dna_string = true; 
            }
        }
        if (dna_string == false)
        {
            cout << "Only A,T,G, or C, and only capitol letters. \n";
        }
    }
    return dna;
}

//restart function code
char restart(int option)
{
    char yesser = 'n';
    cout << "Do you want to end this program? (Enter y for yes)\n";
    cin >> yesser;
    if (yesser == 'y')
    {
        cout << "The program is now exisiting. \n";
		yesser = 'n';
    }
    else
    {
        cout << "Please enter a option. \n";   
		cin >> option;    
		yesser = 'y';        
    }
    return yesser;
}

char runner_of_main(int option, char yesser)
{
	std:: string dna;
	std::string complement;
	double content;
    switch (option)
	{
		case 1: 
			dna = dna_chec_in();
			content = get_gc_content(dna) * 100;
			cout << content<<"% \n";
			yesser = 'y';
			break;
			
		case 2:
			dna = dna_chec_in();
			complement = get_dna_complement(dna);
			cout << complement<<"\n";
			yesser = 'y';
			break;
			
		case 3:
			yesser = restart(option);
			break;				
	}
    return yesser;
}