#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	char yesorno;

	cout << "What was your water meter reading the month before? (In gallons) \n";
	cin >> a;
	cout << "What was your water meter reading this month? (In gallons) \n";
	cin >> b;
	cout << "Have you paid last month's water bill? (Y/N) \n";
	cin >> yesorno;
	
	c = b - a;
	d = c*1.10;
	e = d + 35 + 20;
	f = d + 35;
	
	switch (yesorno)
	{
		case 'y':
		case 'Y':
		cout << "Your bill is PHP " << f << ".";
		break;
		
		case 'n':
		case 'N':
		cout << "Due to your previous unpaid balance, your bill is PHP " << e << ", inclusive of late fee.";
		break;
		
		default:
		cout << "Please answer Y/N";
		return 0;
		break;
	}
	
	getch();
	return 0;
}
