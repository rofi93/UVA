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

string str[100];
bool visited[100][100];
int h,w;

struct output
{
    char ch;
    int x;
};

void reset(int x, int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            visited[i][j]=false;
        }
    }
}

void dfs(int x, int y, char ch)
{
    int i,nx,ny;
    visited[x][y]=true;
    for(i=0;i<4;i++)
    {
        nx=x+dx4[i];
        ny=y+dy4[i];
        if(nx>=0 && ny>=0 && nx<h && ny<w && !visited[nx][ny] && str[nx][ny]==ch)
        {
            dfs(nx,ny,ch);
        }
    }
}

bool operator<(output A, output B)
{
    if(B.x<A.x)
        return true;
    else if(A.x==B.x)
    {
        return A.ch<B.ch;
    }
    return false;
}

int main()
{
    int t,i,j,n,k,component;
    string store;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&h,&w);
        reset(h,w);

        map<char,bool>mp;

        n=0;
        store="";
        for(i=0;i<h;i++)
        {
            cin>>str[i];
            for(j=0;j<w;j++)
            {
                if(!mp[str[i][j]])
                {
                    n++;
                    store+=str[i][j];
                    mp[str[i][j]]=true;
                }
            }
        }
        output *out=new output[n];

        for(k=0;k<n;k++)
        {
            out[k].x=0;
            for(i=0;i<h;i++)
            {
                for(j=0;j<w;j++)
                {
                    if(!visited[i][j] && str[i][j]==store[k])
                    {
                        out[k].ch=store[k];
                        out[k].x++;
                        dfs(i,j,store[k]);
                    }
                }
            }
        }
        sort(out,out+n);
        printf("World #%d\n",tc++);
        for(i=0;i<n;i++)
        {
            printf("%c: %d\n",out[i].ch,out[i].x);
        }

    }
    return 0;
}
