#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    vector<int>v[25];
    queue<int>q;
    int i,j,n,k,tc=1,node,src,dst,visited[25],level[25],x;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<25; i++)
        {
            v[i].clear();
        }

        for(i=1; i<=n; i++)
        {
            scanf("%d",&node);
            v[1].push_back(node);
            v[node].push_back(1);
        }
        for(i=2; i<=19; i++)
        {
            scanf("%d",&n);
            for(j=1; j<=n; j++)
            {
                scanf("%d",&node);
                v[i].push_back(node);
                v[node].push_back(i);
            }
        }

        scanf("%d",&n);
        printf("Test Set #%d\n",tc++);
        for(i=1; i<=n; i++)
        {
            for(j=0; j<25; j++)
            {
                visited[j]=0;
                level[j]=0;
            }
            scanf("%d %d",&src,&dst);
            q.push(src);
            visited[src]=1;
            level[src]=0;
            while(!q.empty())
            {
                x=q.front();
                for(j=0; j<v[x].size(); j++)
                {
                    node=v[x][j];
                    if(!visited[node])
                    {
                        visited[node]=1;
                        level[node]=level[x]+1;
                        q.push(node);
                    }
                }
                q.pop();
            }
            printf("%2d to %2d: %d\n",src,dst,level[dst]);
        }
        printf("\n");
    }
    return 0;
}
