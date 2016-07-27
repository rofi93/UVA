#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<cstring>
#include<queue>
#define a first
#define b second
using namespace std;
int main()
{
    string node1,node2,source,destination;
    map<string,int>mymap;
    map<string,int>::iterator it;
    vector<int>v[10001];
    queue<int>q;
    int i,j,tc=0,n,x,assign,value,value1,value2,src,dst,level[10001],parent[10001],visited[10001],compress[10001];
    while(cin>>n)
    {
        assign=1;
        for(i=1; i<=10000; i++)
        {
            v[i].clear();
        }
        mymap.clear();
        memset(level,-1,10001);
        memset(parent,0,10001);
        memset(visited,0,10001);
        memset(compress,0,10001);
        for(i=1; i<=n; i++)
        {
            cin>>node1>>node2;
            if(mymap.find(node1)==mymap.end())
            {
                mymap[node1]=assign;
                assign++;
            }
            if(mymap.find(node2)==mymap.end())
            {
                mymap[node2]=assign;
                assign++;
            }
            value1=mymap[node1];
            value2=mymap[node2];
            v[value1].push_back(value2);
            v[value2].push_back(value1);
        }
        cin>>source>>destination;
        if(tc)
            printf("\n");
        tc++;
        if(mymap.find(source)==mymap.end() || mymap.find(destination)==mymap.end())
        {
            printf("No route\n");
            continue;
        }
        src=mymap[source];
        dst=mymap[destination];
        q.push(src);
        visited[src]=1;
        level[src]=0;
        while(!q.empty())
        {
            x=q.front();
            for(i=0; i<v[x].size(); i++)
            {
                value=v[x][i];
                if(!visited[value])
                {
                    visited[value]=1;
                    level[value]=level[x]+1;
                    parent[value]=x;
                    q.push(value);
                }
            }
            q.pop();
        }
        if(level[dst]==-1)
        {
            printf("No route\n");
        }
        else
        {
            value=dst;
            compress[1]=dst;
            for(i=2; i<=2*n; i++)
            {
                x=parent[value];
                compress[i]=x;
                if(x==src)
                    break;
                value=x;
            }
            x=0;
            for(j=i; j>0;)
            {
                for(it=mymap.begin(); it!=mymap.end(); it++)
                {
                    if(it->b==compress[j])
                        break;
                }
                cout<<it->a;
                if(x%2==0)
                    printf(" ");
                else
                    printf("\n");
                x++;
                j--;
                for(it=mymap.begin(); it!=mymap.end(); it++)
                {
                    if(it->b==compress[j])
                        break;
                }
                cout<<it->a;
                if(x%2==0)
                    printf(" ");
                else
                    printf("\n");
                x++;
                if(j==1)
                    break;
            }
        }
    }
    return 0;
}
