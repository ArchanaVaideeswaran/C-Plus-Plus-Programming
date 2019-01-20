#include<iostream.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int size;
	cout<<"\nImplementation of Vector";
	cout<<"\nEnter size of array:";
	cin>>size;
	vector<int>array(size);
	vector<int>::iterator it;
	cout<<"\nThe size of array before assignment is"<<array.size();
	for(int i=0;i<=5;i++)
	{
		array.push_back(i);
	}
	cout<<"\nThe size of array after assignment is"<<array.size();
	cout<<"\nArray elements are";
	for(it=array.begin();it!=array.end();it++)
	{
		cout<<*it;
	}
	cout<<"\nFirst element of array"<<array.front();
	cout<<"\nLast element of array"<<array.back();
	cout<<"\nThe array elements in reverse are:";
	vector<int>::reverse_iterator itr;
	for(itr=array.rbegin();itr!=array.rend();itr++)
	{
		cout<<*itr;
	}
	return 0;
}
