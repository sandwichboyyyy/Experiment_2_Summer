#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main ()
{
	int i, n, j, first;
	
	cout << "Enter a number: ";
	cin >> n;

	for (i=0;i<=n;i++)
	{
		first += i;
	}
	
	cout << first - 1;
	
	getch();
	return 0;
}
