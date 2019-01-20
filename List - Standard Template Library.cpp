#include<iostream.h>
#include<list>
using namespace std;
int main()
{
	list<int> l;
	int choice,item;
	list<int>::iterator it;
	while(1)
	{
		cout<<"\nList Implementation";
		cout<<"\n1.Insert element at front";
		cout<<"\n2.Insert element at end";
		cout<<"\n3.Delete element at front";
		cout<<"\n4.Delete element at end";
		cout<<"\n5.Display	first element of list";
		cout<<"\n6.Display last element of list";
		cout<<"\n7.Size of list";
		cout<<"\n8.Remove element with specific values";
		cout<<"\n9.Reverse";
		cout<<"\n10.Delete forward list";
		cout<<"\nEnter your choice";
		cin>>choice;
		switch(choice)
		{
		case 1:
		cout<<"\nEnter value to be inserted at front:";
		cin>>item;
		l.push_front(item);
		break;
		case 2:
		cout<<"\nEnter value to be inserted at end:";
		cin>>item;
		l.push_back(item);
		break;
		case 3:
		item=l.front();
		l.pop_front();
		cout<<"\nElement"<<item<<"deleted";
		break;
		case 4:
		item=l.back();
		l.pop_back();
		cout<<"\nElement"<<item<<"deleted";
		break;
		case 5:
		cout<<"\nFront element of list";
		cout<<l.front();
		break;
		case 6:
		cout<<"\nLast element in list";
		cout<<l.back();
		break;
		case 7:
		cout<<"\nSize of the list:"<<l.size();
		break;
		case 8:
		if(l.size()>0)
		{
			cout<<"\nEnter element to be deleted";
			cin>>item;
			l.remove(item);
		}
		else
		{
			cout<<"\nList is empty";
		}
		break;
		case 9:
		l.reverse();
		cout<<"\nList reversed";
		for(it=l.begin();it!=l.end();it++)
			cout<<*it<<" ";
		break;
		case 10:
		cout<<"\nElements of list";
		for(it=l.begin();it!=l.end();it++)
		cout<<*it<<" ";
		break;
		default:
		cout<<"\nInvalid Choice";
		}
	}
	return 0;
}
