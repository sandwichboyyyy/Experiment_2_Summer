#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int n;
  n = 22;
 	int first=0, second=1, third;
 	for(int a=0;a<n-1;a++)
 	{
  		if(a==0)
  		{
   			cout<<first<<", "<<second<<", ";
   		}
  		else
   		{
   			third = first + second;
   			first = second;
    		second = third;
   			cout<<third<<", ";
   		}
  }
}
