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

const int mx=32000;
int x[mx+5];
vi primes;
void sieve(void)
{
    int i,j,s;
    x[0]=x[1]=1;
    for(i=4; i<=mx; i+=2)
        x[i]=1;
    for(i=3; i*i<=mx; i+=2)
    {
        if(x[i]==0)
        {
            for(j=i*i; j<=mx; j+=2*i)
                x[j]=1;
        }
    }
    primes.pb(2);
    for(i=3; i<=mx; i+=2)
        if(x[i]==0) primes.pb(i);
}

int dig_sum(LL n)
{
    int i,sum;
    sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

LL prime_fact(LL n)
{
    LL i,s,sum,x,num;
    s=sqrt(n);
    i=0;
    sum=0;
    num=n;
    while(primes[i]<=s)
    {
        if(n%primes[i]==0)
        {
            x=dig_sum(primes[i]);
            while(n%primes[i]==0)
            {
                n=n/primes[i];
                sum+=x;
            }
        }
        i++;
    }
    if(n>1)
    {
        if(n==num)
            return 0;
        sum+=dig_sum(n);
    }
    return sum;
}

int main()
{
    LL t,n,i,a,b;
    sieve();
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=n+1 ;; i++)
        {
            a=dig_sum(i);
            b=prime_fact(i);
            if(a==b) break;
        }
        pr1(i);
    }
    return 0;
}
