#include<iostream.h>
double division(int a,int b)
{
	if(b==0)
	{
		throw"Division By Zero Condition";
	}
	return(a/b);
}
int main()
{
	int x,y;
	double z;
	cout<<"\n\tDivision By Zero";
	cout<<"\nEnter the Dividend:";
	cin>>x;
	cout<<"\nEnter the Divisor:";
	cin>>y;
	try
	{
		z=division(x,y);
		cout<<"\nQuotient:"<<z;
	}
	catch(char* msg)
	{
		cout<<msg;
	}
	return 0;
}
