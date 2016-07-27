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

bool valid_name(char ch)
{
    if(ch>='a' && ch<='z')
        return true;
    if(ch>='A' && ch<='Z')
        return true;
    if(ch>='0' && ch<='9')
        return true;
    return false;
}
bool valid_operation(char ch)
{
    if(ch=='<' || ch=='>' || ch=='=')
        return true;
    return false;
}
bool valid_number(char ch)
{
    if(ch>='0' && ch<='9')
        return true;
    return false;
}
int main()
{
    int party,query,i,j,guess,sum;
    string str,operation,name;
    int parcent,num;
    char ch;
    bool operate,res;

    while(cin>>party>>query)
    {
        map<string,int>mp;
        while(party--)
        {
            cin>>str>>parcent>>ch>>num;
            mp[str]=(parcent*10)+num;
        }
        getchar();
        tc=1;
        while(query--)
        {
            getline(cin,str);
            operate=false;
            sum=0;
            for(i=0; i<str.size(); i++)
            {
                if(valid_name(str[i]))
                {
                    name="";
                    while(valid_name(str[i]))
                        name+=str[i++];
                    sum+=mp[name];
                }
                else if(valid_operation(str[i]))
                {
                    operation="";
                    while(valid_operation(str[i]))
                        operation+=str[i++];
                    operate=true;
                    i++;
                }
                if(operate && valid_number(str[i]))
                {
                    guess=0;
                    while(valid_number(str[i]) && i<str.size())
                        guess=(guess*10)+(str[i++]-48);
                }
            }
            guess=guess*10;
            res=true;
            printf("Guess #%d ",tc++);
            if(operation=="<")
            {
                if(sum<guess)
                    res=true;
                else
                    res=false;
            }
            else if(operation=="<=")
            {
                if(sum<=guess)
                    res=true;
                else
                    res=false;
            }
            else if(operation==">")
            {
                if(sum>guess)
                    res=true;
                else
                    res=false;
            }
            else if(operation==">=")
            {
                if(sum>=guess)
                    res=true;
                else
                    res=false;
            }
            else if(operation=="=")
            {
                if(sum==guess)
                    res=true;
                else
                    res=false;
            }
            if(res)
                printf("was correct.");
            else
                printf("was incorrect.");
            nl;
        }
    }
    return 0;
}
