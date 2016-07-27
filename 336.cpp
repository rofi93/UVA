#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<set>
#include<string.h>
#include<queue>
using namespace std;
int main()
{
    map<long int,long int>mymap;
    vector<long int>v[301];
    queue<long int>q;
    long int n,i,j,ttl,node1,node2,count,level[301],visited[301],assign,c,value1,value2,tc=1,x,source,value;
    while(scanf("%ld",&n))
    {
        if(n==0)
            break;
        mymap.clear();
        for(i=0; i<301; i++)
        {
            v[i].clear();
        }
        assign=1;
        for(i=0; i<n; i++)
        {
            scanf("%ld %ld",&node1,&node2);
            if(mymap.find(node1)==mymap.end())
            {
                mymap[node1]=assign++;
            }
            if(mymap.find(node2)==mymap.end())
            {
                mymap[node2]=assign++;
            }
            value1=mymap[node1];
            value2=mymap[node2];
            v[value1].push_back(value2);
            v[value2].push_back(value1);
        }
        while(scanf("%ld %ld",&source,&ttl))
        {
            if(source==0 && ttl==0)
                break;
            memset(level,0,301);
            memset(visited,0,301);
            value=mymap[source];
            visited[value]=1;
            level[value]=0;
            q.push(value);
            while(!q.empty())
            {
                j=q.front();
                for(i=0; i<v[j].size(); i++)
                {
                    value=v[j][i];
                    if(!visited[value])
                    {
                        visited[value]=1;
                        level[value]=level[j]+1;
                        q.push(value);
                    }
                }
                q.pop();
            }
            count=1;
            for(i=1; i<assign; i++)
            {
                if(level[i]<=ttl && level[i]>0)
                    count++;
            }
            printf("Case %ld: ",tc++);
            printf("%ld nodes not reachable from node %ld with TTL = %ld.\n",assign-1-count,source,ttl);
        }
    }
    return 0;
}
