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
using namespace std;
int main()
{
    vector<int>v[200];
    queue<int>q;
    int i,j,n,a,node1,node2,level[200],color[200],visited[200],x,node,edge;
    bool res;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        for(i=0;i<200;i++)
        {
            v[i].clear();
            level[i]=color[i]=visited[i]=0;
        }
        scanf("%d",&edge);
        for(i=0;i<edge;i++)
        {
            scanf("%d %d",&node1,&node2);
            v[node1].push_back(node2);
            v[node2].push_back(node1);
        }
        level[0]=0;
        visited[0]=1;
        color[0]=1;
        q.push(0);
        while(!q.empty())
        {
            x=q.front();
            for(i=0;i<v[x].size();i++)
            {
                node=v[x][i];
                if(!visited[node])
                {
                    visited[node]=1;
                    level[node]=level[x]+1;
                    q.push(node);
                    if(color[x]==1)
                    {
                        color[node]=2;
                    }
                    else
                    {
                        color[node]=1;
                    }
                }
            }
            q.pop();
        }
        res=false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<v[i].size();j++)
            {
                node=v[i][j];
                if(color[i]==color[node])
                {
                    res=true;
                    break;
                }
            }
            if(res)
                break;
        }
        if(res)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");
    }
    return 0;
}

