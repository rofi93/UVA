#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<algorithm>
#include<utility>
using namespace std;

vector<int>v[20000];
vector<int>cost[20000];
int dist[20000];

class Node
{
public:
    int node_number,path_cost;
    Node(int a, int b)
    {
        node_number=a;
        path_cost=b;
    }
    Node()
    {

    }
};

bool operator<(Node A, Node B)
{
    return B.path_cost<A.path_cost;
}

int Dijkstra(int src, int dest)
{
    priority_queue<Node>Q;
    Node top;
    int i,j,k,x;

    dist[src]=0;
    Q.push(Node(src,0));

    while(!Q.empty())
    {
        top=Q.top();
        Q.pop();
        x=top.node_number;
        if(x==dest)
            return dist[dest];
        for(i=0;i<v[x].size();i++)
        {
            j=v[x][i];
            if(dist[x]+cost[x][i]<dist[j])
            {
                dist[j]=dist[x]+cost[x][i];
                Q.push(Node(j,dist[j]));
            }
        }
    }
    return -1;
}

int main()
{
    int node,edge,node1,node2,i,j,t,w,ret,tc=1,src,dest;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<20000;i++)
        {
            v[i].clear();
            cost[i].clear();
            dist[i]=100000;
        }
        scanf("%d %d %d %d",&node,&edge,&src,&dest);
        for(i=0;i<edge;i++)
        {
            scanf("%d %d %d",&node1,&node2,&w);

            v[node1].push_back(node2);
            v[node2].push_back(node1);
            cost[node1].push_back(w);
            cost[node2].push_back(w);
        }
        ret=Dijkstra(src,dest);
        printf("Case #%d: ",tc++);
        if(ret==-1)
        {
            printf("unreachable\n");
        }
        else
        {
            printf("%d\n",ret);
        }
    }
    return 0;
}
