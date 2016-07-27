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
#define fs          first
#define sc          second
#define pb(a)       push_back(a)
#define mp(a,b)     make_pair(a,b)
#define sp          printf(" ")
#define nl          printf("\n")

#define tc1(x)      printf("Case %d: ",x)
#define tc2(x)      printf("Case #%d: ",x)

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

int fw[]= {0,0,0,1,0,0,0,-1};
int fx[]= {0,0,1,0,0,0,-1,0};
int fy[]= {0,1,0,0,0,-1,0,0};
int fz[]= {1,0,0,0,-1,0,0,0};

class lock
{
public:
    char w,x,y,z;
    lock(char a, char b, char c, char d)
    {
        w=a;
        x=b;
        y=c;
        z=d;
    }
    lock()
    {

    }
};

int main()
{
    int level[10000],visited[10000],i,j,k,N,t,num,par;
    char src[5],dest[5],str[5],n[5],m[5];
    queue<lock>Q;
    lock top;

    cin>>t;
    while(t--)
    {
        for(i=0; i<10000; i++)
        {
            level[i]=-1;
            visited[i]=0;
        }
        cin>>src[0]>>src[1]>>src[2]>>src[3];
        cin>>dest[0]>>dest[1]>>dest[2]>>dest[3];
        cin>>N;
        for(i=0; i<N; i++)
        {
            cin>>str[0]>>str[1]>>str[2]>>str[3];
            num=atoi(str);
            visited[num]=1;
        }
        num=atoi(src);
        level[num]=0;
        visited[num]=1;
        Q.push(lock(src[0],src[1],src[2],src[3]));
        while(!Q.empty())
        {
            top=Q.front();
            Q.pop();
            m[0]=top.w;
            m[1]=top.x;
            m[2]=top.y;
            m[3]=top.z;
            par=atoi(m);
            for(i=0; i<8; i++)
            {
                n[0]=m[0]+fw[i];
                n[1]=m[1]+fx[i];
                n[2]=m[2]+fy[i];
                n[3]=m[3]+fz[i];
                for(j=0; j<4; j++)
                {
                    if(n[j]<48)
                        n[j]=57;
                    else if(n[j]>57)
                        n[j]=48;
                }
                num=atoi(n);
                if(visited[num]==0)
                {
                    visited[num]=1;
                    level[num]=level[par]+1;
                    Q.push(lock(n[0],n[1],n[2],n[3]));
                }
            }
        }
        num=atoi(dest);
        printf("%d\n",level[num]);
    }
        return 0;
}
