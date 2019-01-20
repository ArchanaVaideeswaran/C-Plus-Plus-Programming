#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
int cost[10][10],i,j,k,n,stk[10],v,visit[10],visited[10],qu[10],front,rear;
int main()
{
			int m;
			cout<<"\nApplication of Queue- Breadth First Search";
			cout<<"\nEnter the number of vertices:";
			cin>>n;
			cout<<"\nEnter the number of edges:";
			cin>>m;
			cout<<"\n\tEDGES\n";
			for(k=1;k<=m;k++)
			{
				cin>>i>>j;
				cost[i][j]=1;
			}
			cout<<"\nEnter the initial vertex:";
			cin>>v;
			cout<<"\nVisited vertices";
			cout<<v;
			visited[v]=1;
			k=1;
			while(k<n)
			{
			      for(j=1;j<=n;j++)
			      if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			      {
				 visit[j]=1;
				 qu[rear++]=j;
			      }
			      v=qu[front++];
			      cout<<v<<" ";
			      k++;
			      visit[v]=0;
			      visited[v]=1;
			}
			return 0;
}
 
