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

int visited[100][100],m,n;
char cell[100][101];

void DFS(int row, int col)
{
    int i,nx,ny;
    visited[row][col]=1;
    for(i=0;i<8;i++)
    {
        nx=row+dx8[i];
        ny=col+dy8[i];
        if(visited[nx][ny]==0 && nx>=0 && nx<m && ny>=0 && ny<n && cell[nx][ny]=='@')
        {
            DFS(nx,ny);
        }
    }
}

int main()
{
    int i,j,deposit;
    while(cin>>m>>n)
    {
        if(m==0 && n==0)
            break;
        for(i=0;i<100;i++)
        {
            for(j=0;j<100;j++)
            {
                visited[i][j]=0;
            }
        }
        for(i=0;i<m;i++)
        {
            scanf("%s",cell[i]);
        }
        deposit=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(cell[i][j]=='@' && visited[i][j]==0)
                {
                    DFS(i,j);
                    deposit++;
                }
            }
        }
        pr1(deposit);
    }
    return 0;
}
