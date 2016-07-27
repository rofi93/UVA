#include<bits/stdc++.h>
using namespace std;
long int cost[1000][1000],dist[1000][1000];
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
class Node
{
public:
    long int row,column,weight;
    Node(int a,int b, int c)
    {
        row=a;
        column=b;
        weight=c;
    }
    Node()
    {

    }
};
bool operator<(Node A, Node B)
{
    return B.weight<A.weight;
}
long int Dijkstra(int n, int m)
{
    priority_queue<Node>Q;
    long int i,j,k,x,y,z,nx,ny;
    Node top;
    dist[0][0]=cost[0][0];
    Q.push(Node(0,0,cost[0][0]));
    while(!Q.empty())
    {
        top=Q.top();
        Q.pop();
        x=top.row;
        y=top.column;
        z=top.weight;
        for(i=0; i<4; i++)
        {
            nx=x+fx[i];
            ny=y+fy[i];
            if(nx>=0 && ny>=0 && nx<n && ny<m)
            {
                if(z+cost[nx][ny]<dist[nx][ny] || dist[nx][ny]==10000)
                {
                    dist[nx][ny]=z+cost[nx][ny];
                    Q.push(Node(nx,ny,dist[nx][ny]));
                }
            }
        }
    }
    return dist[n-1][m-1];
}
int main()
{
    long int i,j,m,n,t,ret;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld",&n,&m);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cost[i][j]=0;
                dist[i][j]=10000;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&cost[i][j]);
            }
        }
        ret=Dijkstra(n,m);
        printf("%ld\n",ret);
    }
    return 0;
}
