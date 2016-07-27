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
    int t,i,j,k;
    string in1,in2,str1,str2;
    bool found;

    cin>>t;
    while(t--)
    {
        cin>>in1>>in2;

        map<string,string>mp1;
        map<string,string>mp2;
        map<string,string>::iterator it;
        vector<string>vplus;
        vector<string>vminus;
        vector<string>vstar;

        j=k=0;
        for(i=0; i<in1.size()-1; i++)
        {
            if(in1[i]=='{' || in1[i]==',')
            {
                str1="";
                i++;
                while(in1[i]!=':')
                {
                    str1+=in1[i];
                    i++;
                }
            }
            else
            {
                str2="";
                while(in1[i]>=48 && in1[i]<=57)
                {
                    str2+=in1[i];
                    i++;
                }
                i--;
                mp1[str1]=str2;
            }
        }
        for(i=0; i<in2.size()-1; i++)
        {
            if(in2[i]=='{' || in2[i]==',')
            {
                str1="";
                i++;
                while(in2[i]!=':')
                {
                    str1+=in2[i];
                    i++;
                }
            }
            else
            {
                str2="";
                while(in2[i]>=48 && in2[i]<=57)
                {
                    str2+=in2[i];
                    i++;
                }
                i--;
                mp2[str1]=str2;
            }
        }
        found=true;
        for(it=mp1.begin(); it!=mp1.end(); it++)
        {
            str1=it->fs;
            if(mp2[str1]!="")
            {
                if(mp1[str1]!=mp2[str1])
                {
                    vstar.pb(str1);
                    found=false;
                }
            }
            else
            {
                vminus.pb(str1);
                found=false;
            }
        }
        for(it=mp2.begin(); it!=mp2.end(); it++)
        {
            str1=it->fs;
            if(mp1[str1]=="")
            {
                vplus.pb(str1);
                found=false;
            }
        }
        if(found)
        {
            printf("No changes");
            nl;
        }
        else
        {
            for(i=0; i<vplus.size(); i++)
            {
                if(i==0)
                    printf("+");
                printf("%s",vplus[i].c_str());
                if(i<vplus.size()-1)
                    printf(",");
                if(i==vplus.size()-1)
                    nl;
            }
            for(i=0; i<vminus.size(); i++)
            {
                if(i==0)
                    printf("-");
                printf("%s",vminus[i].c_str());
                if(i<vminus.size()-1)
                    printf(",");
                if(i==vminus.size()-1)
                    nl;
            }
            for(i=0; i<vstar.size(); i++)
            {
                if(i==0)
                    printf("*");
                printf("%s",vstar[i].c_str());
                if(i<vstar.size()-1)
                    printf(",");
                if(i==vstar.size()-1)
                    nl;
            }
        }
        nl;
    }
    return 0;
}
