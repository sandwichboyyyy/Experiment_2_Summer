#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cout << "Which package would you like to subscribe to? \n\n";
	cout << "1. For P995/mo 10 hrs of access are provided. Additional hours are P20/hr \n";
	cout << "2. For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. \n";
	cout << "3. For P1995/mo of unlimited access is provided. \n\n";
	cout << "Choose your package: (1-3) \n";
	cin >> a;

	switch (a)
	{
		
		case 1:			
		cout << "You have chosen the first package! \n\n";
			break;
		case 2:			
		cout << "You have chosen the second package! \n\n";
			break;
		case 3:			
		cout << "You have chosen the third package! \n"
			<< "You have unlimited access for the month. \n"
			<< "Your bill will cost PHP 1995. \n";
			return 0;
			break;
		default:
			cout << "Please choose one of the options. (1-3).";
			return 0;
			break;
	}
	cout << "Please input the number of hours you have consumed: \n";
	cin >> b;
	
	c = b - 10;
	d = b - 20;
	
	{
	
	if (a == 1 && c >= 0)
	cout << "You have to pay PHP " << 995 + (c*20) << ".";
	
	else if (a == 1 && c <= 0)
	cout << "You have to pay PHP 995.";
	
	else if (a == 2 && d >= 0)
	cout << "You have to pay PHP " << 1495 + (d*10) << ".";
	
	else if (a == 2 && d <= 0)
	cout << "You have to pay PHP 1495.";
	
	}
	
	
	getch();
	return 0;
}
