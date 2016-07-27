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

vector<int>v[301];
int visited[301],parent[301];
char in[10000];

void BFS(int src, int dest)
{
    queue<int>Q;
    int i,j,x,top;

    Q.push(src);
    parent[src]=0;
    visited[src]=1;
    while(!Q.empty())
    {
        i=Q.front();
        for(j=0; j<v[i].size(); j++)
        {
            x=v[i][j];
            if(visited[x]==0)
            {
                visited[x]=1;
                parent[x]=i;
                Q.push(x);
            }
        }
        Q.pop();
    }
}

int main()
{
    vector<int>out;
    int i,j,n,m,node1,node2,x;
    char *p;
    while(cin>>n)
    {
        getchar();
        for(i=0; i<301; i++)
        {
            v[i].clear();
        }
        for(i=1; i<=n; i++)
        {
            gets(in);
            p = strtok(in,"-,");
            sscanf(p,"%d",&node1);
            p = strtok(NULL,"-,");
            while (p)
            {
                sscanf(p,"%d",&node2);
                v[node1].push_back(node2);
                p = strtok(NULL,"-,");
            }
        }
        scanf("%d",&m);
        printf("-----\n");
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&node1,&node2);
            out.clear();
            memset(parent,-1,301);
            memset(visited,0,301);
            BFS(node1,node2);
            if(visited[node2])
            {
                x=node2;
                while(x)
                {
                    out.push_back(x);
                    x=parent[x];
                }
                for(j=out.size()-1; j>=0; j--)
                {
                    printf("%d",out[j]);
                    if(j)
                        printf(" ");
                }
                printf("\n");
            }
            else
            {
                printf("connection impossible\n");
            }
        }
    }
    return 0;
}
