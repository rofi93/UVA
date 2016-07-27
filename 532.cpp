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

#define LL long long
#define pii pair<int,int>

#define mod 1000000007
#define pi acos(-1.0)

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

int fx[]={0,0,1,-1,0,0};
int fy[]={1,-1,0,0,0,0};
int fz[]={0,0,0,0,1,-1};

class dungeon
{
public:
    int a,b,c;
    dungeon(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    dungeon()
    {

    }
};
int main()
{
    int level[31][31][31],visited[31][31][31],i,j,k,srcx,srcy,srcz,destx,desty,destz,x,y,z,nx,ny,nz;
    int l,r,c;
    char cell[31][31][31];
    queue<dungeon>Q;
    dungeon top;

    while(cin>>l>>r>>c)
    {
        getchar();
        if(l==0 && r==0 && c==0)
            break;
        for(i=0;i<31;i++)
        {
            for(j=0;j<31;j++)
            {
                for(k=0;k<31;k++)
                {
                    cell[i][j][k]='\0';
                    level[i][j][k]=visited[i][j][k]=0;
                }
            }
        }
        for(i=0;i<l;i++)
        {
            for(j=0;j<r;j++)
            {
                for(k=0;k<c;k++)
                {
                    scanf("%c",&cell[i][j][k]);
                    if(cell[i][j][k]=='S')
                    {
                        srcx=j;
                        srcy=k;
                        srcz=i;
                    }
                    if(cell[i][j][k]=='E')
                    {
                        destx=j;
                        desty=k;
                        destz=i;
                    }
                }
                getchar();
            }
            if(i<l-1)
                getchar();
        }
        visited[srcz][srcx][srcy]=1;
        level[srcz][srcx][srcy]=0;
        Q.push(dungeon(srcx,srcy,srcz));
        while(!Q.empty())
        {
            top=Q.front();
            Q.pop();
            x=top.a;
            y=top.b;
            z=top.c;
            for(i=0;i<6;i++)
            {
                nx=x+fx[i];
                ny=y+fy[i];
                nz=z+fz[i];
                if(nx>=0 && nx<r && ny>=0 && ny<c && nz>=0 && nz<l && cell[nz][nx][ny]!='#' && visited[nz][nx][ny]==0)
                {
                    visited[nz][nx][ny]=1;
                    level[nz][nx][ny]=level[z][x][y]+1;
                    Q.push(dungeon(nx,ny,nz));
                }
            }
        }
        if(visited[destz][destx][desty]==1)
        {
            printf("Escaped in %d minute(s).",level[destz][destx][desty]);
        }
        else
        {
            printf("Trapped!");
        }
        nl;
    }
    return 0;
}
