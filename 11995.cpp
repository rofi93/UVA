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
#define setneg(a)   memset(a,-1,sizeof(a))
#define setinf(a)   memset(a,126,sizeof(a))

#define tc1(x)      printf("Case %d: ",x)
#define tc2(x)      printf("Case #%d: ",x)
#define tc3(x)      printf("Case %d:\n",x)
#define tc4(x)      printf("Case #%d:\n",x)

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

int tc=1;
/* global declaration */

int main()
{
    int n,a,x;
    bool s,q,pq;
    while(cin>>n)
    {
        stack<int>S;
        queue<int>Q;
        priority_queue<int>PQ;
        s=true;
        q=true;
        pq=true;
        while(n--)
        {
            scanf("%d",&a);
            if(a==1)
            {
                scanf("%d",&x);
                if(s)
                    S.push(x);
                if(q)
                    Q.push(x);
                if(pq)
                    PQ.push(x);
            }
            else
            {
                scanf("%d",&x);
                if(s)
                {
                    if(!S.empty() && x==S.top())
                        S.pop();
                    else
                        s=false;
                }
                if(q)
                {
                    if(!Q.empty() && x==Q.front())
                        Q.pop();
                    else
                        q=false;
                }
                if(pq)
                {
                    if(!PQ.empty() && x==PQ.top())
                        PQ.pop();
                    else
                        pq=false;
                }
            }
        }
        if(q && !s && !pq)
            printf("queue");
        else if(pq && !s && !q)
            printf("priority queue");
        else if(s && !q && !pq)
            printf("stack");
        else if(!s && !q && !pq)
            printf("impossible");
        else
            printf("not sure");
        nl;
    }
    return 0;
}
