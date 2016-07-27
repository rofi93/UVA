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

bool check(string str)
{
    int i,sum,x[10],total[10],count;
    for(i=0; i<10; i++)
    {
        x[i]=total[i]=0;
    }
    sum=0;
    count=0;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>=48 && str[i]<=57 && count<10)
        {
            sum+=str[i]-48;
            total[count++]=sum;
        }
        else if(str[i]=='X')
        {
            if(count==9)
            {
                sum+=10;
                total[count++]=sum;
            }
            else
                return false;
        }
        else if(str[i]>=48 && str[i]<=57 && count>=10)
        {
            count++;
        }
    }
    if(count!=10)
        return false;
    x[0]=total[0];
    for(i=1; i<10; i++)
    {
        x[i]=total[i]+x[i-1];
    }
    if(x[9]%11==0)
        return true;
    return false;
}

int main()
{
    int sum,i;
    string in,out,str;
    bool res;
    while(getline(cin,in))
    {
        out="";
        res=false;
        for(i=0; i<in.size(); i++)
        {
            if(!res && in[i]!=' ')
                res=true;
            if(res)
                out+=in[i];
        }
        for(i=out.size()-1;; i--)
        {
            if(out[i]==' ')
                out.erase(out.size()-1);
            else
                break;
        }
        cout<<out<<" is ";
        if(in.size()<10)
        {
            pr1("incorrect.");
            continue;
        }
        if(check(out))
            pr1("correct.");
        else
            pr1("incorrect.");
    }
    return 0;
}
