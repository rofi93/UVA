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

vector<int>uv;
int visited[110],related[110],matrix[110][110],node;
void DFS(int src)
{
    int i,j;
    visited[src]=1;
    for(i=1; i<=node; i++)
    {
        if(matrix[src][i])
        {
            related[i]=1;
            if(visited[i]==0)
            {
                related[i]=1;
                DFS(i);
            }
        }
    }
    visited[src]=2;
}
int main()
{
    int i,j,edge,node1,node2,source,n,x;
    while(scanf("%d",&node)!=EOF)
    {
        if(node==0)
            break;
        uv.clear();
        for(i=0; i<110; i++)
        {
            for(j=0;j<110;j++)
            {
                matrix[i][j]=0;
            }
            visited[i]=related[i]=0;
        }
        while(scanf("%d",&node1) && node1)
        {
            while(scanf("%d",&node2) && node2)
            {
                matrix[node1][node2]=1;
            }
        }
        scanf("%d",&n);
        while(n--)
        {
            uv.clear();
            memset(visited,0,110);
            memset(related,0,110);
            scanf("%d",&source);
            DFS(source);

            for(i=1; i<=node; i++)
            {
                if(related[i]==0)
                {
                    uv.push_back(i);
                }
            }
            printf("%d",uv.size());
            for(i=0; i<uv.size(); i++)
            {
                printf(" %d",uv[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
