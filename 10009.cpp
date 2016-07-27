#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstring>
/* all c header file */

#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<algorithm>
#include<utility>
#include<sstream>
/* all c++ header file */

#include<bits/stdc++.h>

/* all header files included */

#define pb(a) push_back(a)

/* defining macros */

using namespace std;

int path[30],visited[30];
vector<int>v[30];

void BFS(int src, int dest)
{
    queue<int>Q;
    int i,j,k,x,top;
    Q.push(src);
    path[src]=0;
    visited[src]=1;
    while(!Q.empty())
    {
        top=Q.front();
        Q.pop();
        for(i=0; i<v[top].size(); i++)
        {
            j=v[top][i];
            if(visited[j]==0)
            {
                path[j]=top;
                Q.push(j);
                if(j==dest)
                {
                    while(!Q.empty())
                    {
                        Q.pop();
                    }
                }
            }
        }
    }
}
int main()
{
    int t,i,j,k,n,m,assign,node1,node2,x;
    map<char,int>mymap1;
    map<int,char>mymap2;
    vector<int>out;
    string str1,str2;
    char ch,ch1,ch2;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0; i<30; i++)
        {
            v[i].clear();
        }
        mymap1.clear();
        mymap2.clear();
        assign=1;
        for(i=0; i<n; i++)
        {
            cin>>str1>>str2;
            ch=str1[0];
            if(mymap1.find(ch)==mymap1.end())
            {
                node1=mymap1[ch]=assign;
                mymap2[assign]=ch;
                assign++;
            }
            ch=str2[0];
            if(mymap1.find(ch)==mymap1.end())
            {
                node2=mymap1[ch]=assign;
                mymap2[assign]=ch;
                assign++;
            }
            v[node1].pb(node2);
            v[node2].pb(node1);
            ch1=str1[0];
            ch2=str2[0];
            cout<<mymap1[ch1]<<" "<<mymap1[ch2]<<endl;
        }
        for(i=0; i<m; i++)
        {
            cin>>str1>>str2;
            node1=mymap1[str1[0]];
            node2=mymap1[str2[0]];
            ch='R';
            x=mymap1[ch];
            memset(path,-1,30);
            memset(visited,0,30);
            out.clear();
            BFS(node1,x);
            while(x!=-1)
            {
                if(x)
                    out.pb(x);
                x=path[x];
            }
            for(i=out.size()-1; i>=0; i--)
            {
                x=out[i];
                cout<<mymap2[x];
            }
            out.clear();
            memset(path,-1,30);
            memset(visited,0,30);
            BFS(x,node2);
            x=node2;
            while(x!=-1)
            {
                if(x)
                    out.pb(x);
                x=path[x];
            }
            for(i=out.size()-1; i>=0; i--)
            {
                x=out[i];
                cout<<mymap2[x];
            }
            printf("\n");
        }

    }
    return 0;
}
