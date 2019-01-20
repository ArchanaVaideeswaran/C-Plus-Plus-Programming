#include<iostream.h>
#include<conio.h>
int g[10][10],i=1,k,j,n;
int known[10],dist[10],path[10];
int min()
{
	int m=9999,i,flag,v;
	for(i=1;i<=n;i++)
	{
		if((dist[i]<m) && (known[i]==0))
		{
			v=i;
			m=dist[i];
		}
	}
	return(v);
}
void dijkstra(int g[][10],int c[][10])
{

	int w,s=1;
	for(k=1;k<=n;k++)
	{
		known[k]=0;
		dist[k]=9999;
		path[k]=0;
	}
	dist[s]=0;

	for(i=1;i<=n;i++)
	{
		int v;
		v=min();
		known[v]=1;
		for(w=1;w<=n;w++)
		{
			if(g[v][w]==1)
			{
				if(known[w]==0)
				{
					if(dist[w]>dist[v]+c[v][w])
					{
						dist[w]=dist[v]+c[v][w];
						path[w]=v;
					}
				}
			}
		}
		cout<<"Stage "<<i<<":"<<endl;
		cout<<"vertex  "<<"known  "<<"dist  "<<"Path"<<endl;
		for(j=1;j<=n;j++)
		{
			cout<<j<<"        "<<known[j]<<"     "<<dist[j]<<"     "<<path[j]<<endl;
		}

	}
}
void main()
{
	int c[10][10];
	clrscr();
	cout<<"Enter the number of vertex:"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix of graph:"<<endl;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>g[i][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(g[i][j]==1)
			{
				cout<<"Enter the cost of the edge "<<i<<","<<j<<endl;
				cin>>c[i][j];
			}
		}
	}
	dijkstra(g,c);
	getch();
}
