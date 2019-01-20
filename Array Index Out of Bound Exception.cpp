#include<iostream.h>
int main()
{
	cout<<"\n\tArray Index Out Of Bound";
	int myarray[10];
	try
	{
		cout<<"\nThe Array Elements are";
		for(int n=0;n<=10;n++)
		{
			if(n>9)
				throw"Out Of Range!!";
			myarray[n]=n;
			cout<<myarray[n]<<" ";
		}
	}
	catch(char* str)
	{
		cout<<"\n\nException:\n"<<str;
	}
	return 0;
}
