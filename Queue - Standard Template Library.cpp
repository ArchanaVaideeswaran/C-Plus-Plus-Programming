#include<iostream>
#include<queue>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
      queue<int>q;
      int choice,item;
      while(1)
      {
          cout<<"\n\tQueue Implementation";
          cout<<"\n1.Insert element into queue";
          cout<<"\n2.Delete element into queue";
          cout<<"\n3.Size of queue";
          cout<<"\n4.Front element of queue";
          cout<<"\n5.Last element of queue";
          cout<<"\n6.exit";
          cout<<"\nEnter your choice:";
          cin>>choice;
          switch(choice)
          {
              case 1:cout<<"\nEnter value to be inserted:";
              cin>>item;
              q.push(item);
              break;
              case 2:item=q.front();
              q.pop();
              cout<<"\nElement"<<item<<"deleted";
              break;
              case 3:cout<<"\nSize of queue:";
              cout<<q.size();
              break;
              case 4:cout<<"\nFront element of queue:";
              cout<<q.front();
              break;
              case 5:cout<<"\nBack element of queue:";
              cout<<q.back();
              break;
              default:cout<<"\nWrong choice";
          }
      }
      return 0;
}
