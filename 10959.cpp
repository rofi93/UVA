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
int main()
{
    vector<int>v[1000];
    queue<int>Q;
    int node,edge,node1,node2,i,j,k,t,x,level[1000],visited[1000];
    scanf("%d",&t);
    while(t--)
    {
        for(i=0; i<1000; i++)
        {
            v[i].clear();
            level[i]=-1;
            visited[i]=0;
        }
        scanf("%d %d",&node,&edge);
        for(i=0; i<edge; i++)
        {
            scanf("%d %d",&node1,&node2);
            v[node1].push_back(node2);
            v[node2].push_back(node1);
        }
        level[0]=0;
        visited[0]=1;
        Q.push(0);
        while(!Q.empty())
        {
            i=Q.front();
            for(j=0; j<v[i].size(); j++)
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
        for(i=1; i<node; i++)
        {
            printf("%d\n",level[i]);
        }
        if(t)
            printf("\n");
    }
    return 0;
}
