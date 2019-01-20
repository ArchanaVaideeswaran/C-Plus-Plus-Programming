#include<iostream.h>
#include<stdlib.h>
class graph
{
    int n;
    int cost[10][10];
    int known[10],d[10],p[10];
    public:
    void initialize();
    void shortest();
    void display();
    int mincost();
};
void graph::initialize()
{
    int i,j;
    cout<<"\nEnter the no of vertices:";
    cin>>n;
    cout<<"\nEnter the cost matrix:";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>cost[i][j];
    for(i=1;i<=n;i++)
    {
        known[i]=0;
        p[i]=0;
        d[i]=0;
    }
}
void graph::shortest()
{
    int i;
    int num_ver=1,v;
    d[2]=0;
    p[1]=0;
    while(num_ver<=n)
    {
        v=mincost();
        known[v]=1;
        for(i=1;i<=n;i++)
        {
            if(cost[v][i]!=0)
            {
                if(known[i]==0&&(cost[v][i])<d[i])
                {
                    d[i]=cost[v][i];
                    p[i]=v;
                }
            }
        }
        num_ver++;
    }
}
int graph::mincost()
{
    int i;
    int min=999,pos;
    for(i=1;i<=n;i++)
    {
        if((d[i]<min)&&!known[i])
        {
            min=d[i];
            pos=i;
        }
    }
    return pos;
}
void graph::display()
{
    int i;
    cout<<"\nVertex\tKnown\tDistance\tPath\n";
    for(i=1;i<=n;i++)
    {
        cout<<"V";
        cout<<i;
        cout<<"\t"<<known[i];
        cout<<"\t"<<d[i]<<"\t";
        if(d[i]!=99 && d[i]!=0)
        cout<<"V";
        cout<<p[i];
        cout<<"\n";
    }
}
int main()
{
    graph g;
    cout<<"\nPRIMS ALGORITHM";
    g.initialize();
    g.shortest();
    g.display();
    return 0;
}
