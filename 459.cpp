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

vector<int>v[30];
int visited[30];

void BFS(int src)
{
    queue<int>Q;
    int i,j,k,x;
    visited[src]=1;
    Q.push(src);
    while(!Q.empty())
    {
        i=Q.front();
        for(j=0; j<v[i].size(); j++)
        {
            x=v[i][j];
            if(visited[x]==0)
            {
                visited[x]=1;
                Q.push(x);
            }
        }
        Q.pop();
    }
}

int main()
{
    char ch[5],str[5];
    int node,edge,node1,node2,i,j,k,x,t;
    bool res;
    scanf("%d",&t);
    scanf("\n");
    while(t--)
    {
        for(i=0; i<30; i++)
        {
            v[i].clear();
            visited[i]=0;
        }
        gets(ch);
        node=ch[0]-64;
        while(gets(str) && strlen(str))
        {
            node1=str[0]-64;
            node2=str[1]-64;
            v[node1].push_back(node2);
            v[node2].push_back(node1);
        }
        i=0;
        for(j=1; j<=node; j++)
        {
            if(visited[j]==0)
            {
                BFS(j);
                i++;
                j=0;
            }
        }
        printf("%d\n",i);
        if(t)
            printf("\n");
    }
    return 0;
}
