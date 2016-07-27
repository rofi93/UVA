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

bool leap(int n)
{
    if(n%4==0 && n%100!=0)
        return true;
    if(n%400==0)
        return true;
    return false;
}

int main()
{
    int d,m,y,t,i,nm,nd,ny,day;
    string zodiac;
    string abc[]= {"aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius","capricorn"};
    bool check;
    int str;
    int mp[]= { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    cin>>t;
    while(t--)
    {
        scanf("%d",&str);
        y=str%10000;
        str=str/10000;
        d=str%100;
        str=str/100;
        m=str;

        for(i=1; i<=280; i++)
        {
            d++;
            if(m==2 && leap(y))
            {
                mp[2]=29;
            }
            else if(m==2 && !leap(y))
            {
                mp[2]=28;
            }
            if(d>mp[m])
            {
                d=1;
                m++;
            }
            if(m>12)
            {
                m=1;
                y++;
            }
        }

        if((m==1 && d>=21) || (m==2 && d<=19))
            zodiac=abc[0];
        else if((m==2 && d>=20) || (m==3 && d<=20))
            zodiac=abc[1];
        else if((m==3 && d>=21) || (m==4 && d<=20))
            zodiac=abc[2];
        else if((m==4 && d>=21) || (m==5 && d<=21))
            zodiac=abc[3];
        else if((m==5 && d>=22) || (m==6 && d<=21))
            zodiac=abc[4];
        else if((m==6 && d>=22) || (m==7 && d<=22))
            zodiac=abc[5];
        else if((m==7 && d>=23) || (m==8 && d<=21))
            zodiac=abc[6];
        else if((m==8 && d>=22) || (m==9 && d<=23))
            zodiac=abc[7];
        else if((m==9 && d>=24) || (m==10 && d<=23))
            zodiac=abc[8];
        else if((m==10 && d>=24) || (m==11 && d<=22))
            zodiac=abc[9];
        else if((m==11 && d>=23) || (m==12 && d<=22))
            zodiac=abc[10];
        else if((m==12 && d>=23) || (m==1 && d<=20))
            zodiac=abc[11];

        printf("%d %02d/%02d/%04d %s\n",tc++,m,d,y,zodiac.c_str());
    }
    return 0;
}
