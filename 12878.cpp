/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

#include<bits/stdc++.h>
/* all header files included */

#define LL long long
#define pii pair<int,int>

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define sp printf(" ")
#define nl printf("\n")

#define tc1(x) printf("Case %d: ",x)
#define tc2(x) printf("Case #%d: ",x)
#define pr1(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
/* defining macros */

using namespace std;

int dx4[]={1,-1,0,0};
int dy4[]={0,0,1,-1};
int dx8[]={1,-1,0,0,-1,1,-1,1};
int dy8[]={0,0,1,-1,1,1,-1,-1};
int dkx8[]={-1,1,-1,1,-2,-2,2,2};
int dky8[]={2,2,-2,-2,1,-1,1,-1};
/* direction array */

vector<int>v[10000];
vector<int>cost[10000];
int dist[10000];

class trail
{
public:
    int a,b;
    trail(int u, int v)
    {
        a=u;
        b=v;
    }
    trail()
    {

    }
};
bool operator<(trail A, trail B)
{
    return B.b<A.b;
}
void Dijkstra(int dest)
{
    priority_queue<trail>PQ;
    int i,j,k,l,x,y;
    trail top;
    PQ.push(trail(0,0));
    dist[0]=0;
    while(!PQ.empty())
    {
        top=PQ.top();
        PQ.pop();
        x=top.a;
        /*if(x==dest)
            return dist[dest];*/
        for(i=0;i<v[x].size();i++)
        {
            j=v[x][i];
            if(dist[x]+cost[x][i]<dist[j] || dist[j]==10000)
            {
                dist[j]=dist[x]+cost[x][i];
                PQ.push(trail(j,dist[j]));
            }
        }
    }
    //return dist[dest];
}
int main()
{
    int p,t,i,j,node1,node2,length,ret;
    while(cin>>p>>t)
    {
        for(i=0;i<10000;i++)
        {
            v[i].clear();
            cost[i].clear();
            dist[i]=10000;
        }
        for(i=0;i<t;i++)
        {
            cin>>node1>>node2>>length;
            v[node1].pb(node2);
            v[node2].pb(node1);
            cost[node1].pb(length);
            cost[node2].pb(length);
        }
        Dijkstra(p-1);
        for(i=0;i<p;i++)
        {
            pr1(dist[i]);
        }
        //pr1(ret*2);
    }
    return 0;
}

