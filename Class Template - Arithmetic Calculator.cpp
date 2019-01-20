#include<iostream.h>
#include<conio.h>
template<class T>
class Calculator
{
	T num1,num2;
	Public:
	Calculator(T n1,T n2)
	{
		num1=n1;
		num2=n2;
	}
	T add(){return num1+num2;}
	T sub(){return num1-num2;}
	T mul(){return num1*num2;}
	T div(){return num1/num2;}
};
int main()
{
	clrscr();
	int n1,n2;
	float f1,f2;
	int ch;
	char choice;
	cout<<"\n\t\tClass Template - Simple Calculator\n";
	cout<<"\nEnter the two integer values:\t";
	cin>>n1>>n2;
	Calculator<int> intcal(n1,n2);
	cout<<"\nEnter the two floating point values:\t";
	cin>>f1>>f2;
	Calculator<float> floatcal(f1,f2);
	do
	{
		cout<<"\n\t\tArithmetic Operation";
		cout<<"\n1. Add";
		cout<<"\n2. Subract";
		cout<<"\n3. Multiply";
		cout<<"\n4. Divide";
		cout<<"\nEnter your choice";
		cin>>ch;
		swithc(ch)
		{
			case1:
			cout<<"\nThe result after integer addition is:"<<intcal.add();
			cout<<"\nThe result after floating point addition is:"<<floatcal.add();
			break;
			case2:
			cout<<"\nThe result after integer subraction is:"<<intcal.sub();
			cout<<"\nThe result after floating point subraction is:"<<floatcal.sub();
			break;
			case3:
			cout<<"\nThe result after integer multiplition is:"<<intcal.mul();
			cout<<"\nThe result after floating point multiplition is:"floatcal.mul();
			break;
			case4:
			cout<<"\nThe result after integer division is:"<<intcal.div();
			cout<<"\nThe result after floating point division is:"floatcal.div();
			break;
			default:
			cout<<"\nInvalid Choice!";
			break;
		}
		cout<<"Do you want to continue(y/n)?:";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
	getch();
	return 0;
}
