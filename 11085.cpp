/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <bits/stdc++.h>
/* all header files included */

#define fs            first
#define sc            second
#define sp            printf(" ")
#define nl            printf("\n")
#define pb(a)         push_back(a)
#define mp(a,b)       make_pair(a,b)

#define setzero(a)    memset(a,0,sizeof(a))
#define setneg(a)     memset(a,-1,sizeof(a))
#define setinf(a)     memset(a,126,sizeof(a))

#define tc1(x)        printf("Case %d: ",x)
#define tc2(x)        printf("Case #%d: ",x)
#define tc3(x)        printf("Case %d:\n",x)
#define tc4(x)        printf("Case #%d:\n",x)

#define pr1(x)        cout<<x<<"\n"
#define pr2(x,y)      cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)    cout<<x<<" "<<y<<" "<<z<<"\n"
#define pr4(w,x,y,z)  cout<<w<<" "<<x<<" "<<y<<" "<<z<<"\n"
#define fast          ios::sync_with_stdio(0)
#define read          freopen("input.txt","r",stdin)
#define write         freopen("output.txt","w",stdout)
#define prflag1(flag) printf("%s\n",(flag)?"YES":"NO")
#define prflag2(flag) printf("%s\n",(flag)?"Yes":"No")
#define prflag3(flag) printf("%s\n",(flag)?"yes":"no")
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
/* template functions */

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int>pii;
typedef pair<LL, LL>pll;
typedef vector<int>vi;
typedef vector<LL>vll;
typedef vector<pii>vpii;
typedef vector<pll>vpll;
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
const double eps=1e-9;
const double pi=acos(-1.0);
const long long int mx=8;
const long long int mod=1e9+7;
/* global declaration */

bool board[mx+5][mx+5];
vector <string> res;

bool safe(int row, int col)
{
    int i,j;
    for(i=1;i<=col;i++)
    {
        if(board[row][i]) return false;
    }
    for(i=row,j=col;i>0 && j>0;i--,j--)
    {
        if(board[i][j]) return false;
    }
    for(i=row,j=col;i<=8 && j>0;i++,j--)
    {
        if(board[i][j]) return false;
    }
    return true;
}

string _to_string(int i)
{
    string str;
    str+=i+'0';
    return str;
}

void backtrack(int col, string str)
{
    if(col>8)
    {
        res.pb(str);
        return;
    }
    int i;
    string x;
    for(i=1;i<=8;i++)
    {
        if(safe(i,col))
        {
            board[i][col]=1;
            x=_to_string(i);
            backtrack(col+1,str+x);
            board[i][col]=0;
        }
    }
    return;
}

int main()
{
    int i,j,k,a;
    bool flag=false;
    string str;
    backtrack(1,"");
    while(cin>>a)
    {
        str="";
        str+=_to_string(a);
        for(i=0;i<7;i++)
        {
            scanf("%d",&a);
            str+=_to_string(a);
        }
        k=INT_MAX;
        for(i=0;i<res.size();i++)
        {
            a=0;
            for(j=0;j<8;j++) a+=str[j]!=res[i][j];
            k=min(a,k);
        }
        tc1(tc++);
        pr1(k);
    }
    return 0;
}
