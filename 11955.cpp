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

ULL dp[55][55];

ULL ncr(ULL n, ULL r)
{
    ULL i,sum;
    r=min(r,n-r);
    sum=1;
    for(i=1; i<=r; i++)
    {
        sum=sum*(n-r+i);
        sum=sum/i;
    }
    return sum;
}

void get_fact(void)
{
    ULL i,j;
    for(i=1; i<=50; i++)
    {
        for(j=0; j<=50; j++)
        {
            dp[i][j]=ncr(i,j);
        }
    }
}
int main()
{
    string input,a,b,x,y;
    ULL i,j,k,t,n;
    get_fact();

    cin>>t;
    while(t--)
    {
        cin>>input;
        tc1(tc++);
        for(i=0; i<input.size();)
        {
            if(input[i]=='(')
            {
                a="";
                i++;
                while(input[i]!='+')
                {
                    a+=input[i];
                    i++;
                }
            }
            else if(input[i]=='+')
            {
                b="";
                i++;
                while(input[i]!=')')
                {
                    b+=input[i];
                    i++;
                }
                i++;
            }
            else if(input[i]=='^')
            {
                k=0;
                i++;
                while(input[i]>=48 && input[i]<=57)
                {
                    k=(k*10)+(input[i]-48);
                    i++;
                }
            }
        }
        for(i=0; i<=k; i++)
        {
            x="";
            y="";
            if(dp[k][i]>1)
            {
                cout<<dp[k][i]<<"*";
            }
            if(k-i>0)
            {
                x=a;
                if(k-i>1)
                {
                    x+='^';
                    if(k-i<10)
                        x+=(k-i)+48;
                    else
                    {
                        n=k-i;
                        x+=(n/10)+48;
                        x+=(n%10)+48;
                    }
                }
            }
            if(i)
            {
                y=b;
                if(i<k)
                    x+='*';
                if(i>1)
                {
                    y+='^';
                    if(i<10)
                    y+=i+48;
                    else
                    {
                        n=i;
                        y+=(n/10)+48;
                        y+=(n%10)+48;
                    }
                }
            }
            cout<<x<<y;
            if(i<k)
                cout<<"+";
        }
        nl;
    }
    return 0;
}
