/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

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

template <class T> inline T bigmod(T b, T p, T m)
{
    T ret;
    if(p==0) return 1;
    if(p&1)
    {
        ret=(bigmod(b,p/2,m)%m);
        return ((b%m)*ret*ret)%m;
    }
    else
    {
        ret=(bigmod(b,p/2,m)%m);
        return (ret*ret)%m;
    }
}
template <class T> inline T _sqrt(T a)
{
    return (T)sqrt((double)a);
}
template <class T, class X> inline T _pow(T a, X b)
{
    T res=1;
    for(int i=1; i<=b; i++)
        res*=a;
    return res;
}
/* template functions */

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
const long long int mx=100000;
/* global declaration */

int main()
{
    string str[100],command;
    char orientation;
    int i,j,x,y,n,m,c,sticker;
    while(cin>>m>>n>>c)
    {
        if(!m && !n && !c)
            break;
        for(i=0;i<m;i++)
        {
            cin>>str[i];
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='N' || str[i][j]=='S' || str[i][j]=='L' || str[i][j]=='O')
                {
                    x=i;
                    y=j;
                    if(str[i][j]=='L')
                        orientation='E';
                    else if(str[i][j]=='O')
                        orientation='W';
                    else
                        orientation=str[i][j];
                }
            }
        }
        cin>>command;
        sticker=0;
        for(i=0;i<c;i++)
        {
            if(command[i]=='D')
            {
                if(orientation=='N')
                    orientation='E';
                else if(orientation=='E')
                    orientation='S';
                else if(orientation=='S')
                    orientation='W';
                else if(orientation=='W')
                    orientation='N';
            }
            else if(command[i]=='E')
            {
                if(orientation=='N')
                    orientation='W';
                else if(orientation=='W')
                    orientation='S';
                else if(orientation=='S')
                    orientation='E';
                else if(orientation=='E')
                    orientation='N';
            }
            else if(command[i]=='F')
            {
                if(orientation=='N' && x-1>=0 && str[x-1][y]!='#')
                    x--;
                else if(orientation=='E' && y+1<n && str[x][y+1]!='#')
                    y++;
                else if(orientation=='S' && x+1<m && str[x+1][y]!='#')
                    x++;
                else if(orientation=='W' && y-1>=0 && str[x][y-1]!='#')
                    y--;
                if(str[x][y]=='*')
                {
                    str[x][y]='.';
                    sticker++;
                }
            }
        }
        pr1(sticker);
    }
    return 0;
}
