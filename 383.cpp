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

vector<int>v[35];
map<string,int>mymap;
int level[35],visited[35];

void BFS(int src, int dest)
{
    queue<int>Q;
    int i,j,x,top;

    Q.push(src);
    level[src]=0;
    visited[src]=1;
    while(!Q.empty())
    {
        i=Q.front();
        for(j=0;j<v[i].size();j++)
        {
            x=v[i][j];
            if(visited[x]==0)
            {
                visited[x]=1;
                level[x]=level[i]+1;
                Q.push(x);
            }
        }
        Q.pop();
    }
}

int main()
{
    string str1,str2;
    int i,j,t,tc=1,M,N,P,node1,node2,assign,size;
    scanf("%d",&t);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    while(t--)
    {
        mymap.clear();
        for(i=0;i<35;i++)
        {
            v[i].clear();
        }
        scanf("%d %d %d",&M,&N,&P);
        assign=1;
        for(i=1;i<=M;i++)
        {
            cin>>str1;
            mymap[str1]=assign++;
        }
        for(i=1;i<=N;i++)
        {
            cin>>str1>>str2;
            node1=mymap[str1];
            node2=mymap[str2];
            v[node1].push_back(node2);
            v[node2].push_back(node1);
        }
        printf("DATA SET  %d\n\n",tc++);
        for(i=1;i<=P;i++)
        {
            memset(level,-1,35);
            memset(visited,0,35);

            cin>>size>>str1>>str2;
            node1=mymap[str1];
            node2=mymap[str2];
            BFS(node1,node2);
            if(visited[node2])
            {
                printf("$%d\n",size*100*level[node2]);
            }
            else
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
        }
        printf("\n");
        if(!t)
            printf("END OF OUTPUT\n");
    }
    return 0;
}
