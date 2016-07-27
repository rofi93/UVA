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
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

#include <bits/stdc++.h>
/* all header files included */

#define mod         1000000007
#define pi          acos(-1.0)
#define eps         1e-9

#define fs          first
#define sc          second
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          printf(" ")
#define nl          printf("\n")

#define set0(a)     memset(a,0,sizeof(a))
#define setinf(a)   memset(a,126,sizeof(a))

#define tc1(x)      printf("Case %d: ",x)
#define tc2(x)      printf("Case #%d: ",x)
#define tc3(x)      printf("Case %d:\n",x)

#define pr1(x)      cout<<x<<"\n"
#define pr2(x,y)    cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)  cout<<x<<" "<<y<<" "<<z<<"\n"
/* defining macros */

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int>pii;
typedef pair<LL, LL>pll;
typedef pair<double, double>pdd;
typedef vector<int>vi;
typedef vector<LL>vll;
typedef vector<double>vd;
/* type definition */

int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};
int dx8[]= {1,-1,0,0,-1,1,-1,1};
int dy8[]= {0,0,1,-1,1,1,-1,-1};
int dkx8[]= {-1,1,-1,1,-2,-2,2,2};
int dky8[]= {2,2,-2,-2,1,-1,1,-1};
/* direction array */

int main()
{
    map<string, int>mymap1;
    map<int, string>mymap2;
    int i=0,j,k,n,assign,x,visited[30000],parent[30000];
    string str[25150],src,dest,new_str,old_str;
    queue<int>Q;
    bool tc=false;

    assign=1;
    while(getline(cin,str[i]) && str[i].size())
    {
        mymap1[str[i]]=assign;
        mymap2[assign]=str[i];
        assign++;
        i++;
    }
    while(cin>>src>>dest)
    {
        if(tc)
           nl;
        else
            tc=true;
        if(src.size()!=dest.size())
        {
            printf("No solution.");
            nl;
            continue;
        }
        set0(parent);
        set0(visited);
        vi vs;
        x=mymap1[src];
        visited[x]=1;
        Q.push(x);
        while(!Q.empty())
        {
            x=Q.front();
            Q.pop();
            old_str=mymap2[x];
            for(i=0;i<old_str.size();i++)
            {
                new_str=old_str;
                for(j=0;j<26;j++)
                {
                    if(new_str[i]>='a' && new_str[i]<='z')
                    {
                        n=(new_str[i]-97+1)%26;
                        new_str[i]=n+97;
                    }
                    else
                    {
                        n=(new_str[i]-65+1)%26;
                        new_str[i]=n+65;
                    }
                    if(mymap1[new_str]!=0 && visited[mymap1[new_str]]==0)
                    {
                        n=mymap1[new_str];
                        Q.push(n);
                        visited[n]=1;
                        parent[n]=x;
                    }
                }
            }
        }
        n=mymap1[dest];
        if(parent[n]!=0)
        {
            x=parent[n];
            while(x)
            {
                vs.pb(x);
                x=parent[x];
            }
            for(i=vs.size()-1;i>=0;i--)
            {
                x=vs[i];
                pr1(mymap2[x]);
            }
            pr1(dest);
        }
        else
        {
            printf("No solution.");
            nl;
        }
    }
    return 0;
}
