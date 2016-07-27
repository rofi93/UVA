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
    vector<int>v[2500];
    queue<int>q;
    int i,j,t,m,d,level[2500],visited[2500],boom[2500],count,e,n,node,source,x,high;
    while(scanf("%d",&e)!=EOF)
    {
        for(i=0; i<2500; i++)
        {
            v[i].clear();
        }
        for(i=0; i<e; i++)
        {
            scanf("%d",&n);
            for(j=0; j<n; j++)
            {
                scanf("%d",&node);
                v[i].push_back(node);
            }
        }
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&source);
            for(i=0; i<2500; i++)
            {
                level[i]=-1;
                visited[i]=boom[i]=0;
            }
            q.push(source);
            level[source]=0;
            visited[source]=1;
            j=count=0;
            m=d=high=0;
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
                        high=level[x]+1;
                        q.push(node);
                    }
                }
                q.pop();
            }
            for(i=1;i<=high;i++)
            {
                count=0;
                for(j=0;j<e;j++)
                {
                    if(level[j]==i)
                    {
                        count++;
                    }
                }
                if(count>m)
                {
                    m=count;
                    d=i;
                }
            }
            if(high)
            {
                printf("%d %d\n",m,d);
            }
            else
            {
                printf("0\n");
            }
        }
    }
    return 0;
}
