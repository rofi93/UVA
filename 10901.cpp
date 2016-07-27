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

struct ferry
{
    int idx,arrive,reach;
};

bool operator<(ferry A, ferry B)
{
    return A.idx<B.idx;
}

int main()
{
    int i,t,n,m,current_time,period,a,cnt;
    string str;
    bool side;
    ferry tmp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&n,&period,&m);
        queue<ferry>left,right;
        vector<ferry>out;
        for(i=0; i<m; i++)
        {
            cin>>a>>str;
            tmp.arrive=a;
            tmp.idx=i;
            tmp.reach=0;
            if(str=="left") left.push(tmp);
            else right.push(tmp);
        }
        current_time=0;
        side=false;
        for(i=0; i<m;)
        {
            if(!side && i<m)
            {
                cnt=0;
                while(left.size() && left.front().arrive<=current_time && cnt<n && i<m)
                {
                    tmp=left.front();
                    tmp.reach=current_time+period;
                    out.pb(tmp);
                    left.pop();
                    cnt++;
                    i++;
                    side=true;
                }
                if(!side)
                {
                    if(right.empty())
                    {
                        if(left.front().arrive>current_time)
                        {
                            current_time=left.front().arrive;
                        }
                        tmp=left.front();
                        tmp.reach=current_time+period;
                        out.pb(tmp);
                        left.pop();
                        i++;
                        side=true;
                        current_time+=period;
                    }
                    else if(left.empty())
                    {
                        if(right.front().arrive>current_time)
                        {
                            current_time=right.front().arrive;
                        }
                        side=true;
                        current_time+=period;
                    }
                    else
                    {
                        if(left.front().arrive<=right.front().arrive)
                        {
                            if(left.front().arrive>current_time) current_time=left.front().arrive;
                        }
                        else
                        {
                            if(right.front().arrive>current_time) current_time=right.front().arrive;
                            side=true;
                            current_time+=period;
                        }
                    }
                }
                else
                {
                    current_time+=period;
                }
            }
            if(side && i<m)
            {
                cnt=0;
                while(right.size() && right.front().arrive<=current_time && cnt<n && i<m)
                {
                    tmp=right.front();
                    tmp.reach=current_time+period;
                    out.pb(tmp);
                    right.pop();
                    cnt++;
                    i++;
                    side=false;
                }
                if(side)
                {
                    if(left.empty())
                    {
                        if(right.front().arrive>current_time)
                        {
                            current_time=right.front().arrive;
                        }
                        tmp=right.front();
                        tmp.reach=current_time+period;
                        out.pb(tmp);
                        right.pop();
                        i++;
                        side=false;
                        current_time+=period;
                    }
                    else if(right.empty())
                    {
                        if(left.front().arrive>current_time)
                        {
                            current_time=left.front().arrive;
                        }
                        side=false;
                        current_time+=period;
                    }
                    else
                    {
                        if(right.front().arrive<=left.front().arrive)
                        {
                            if(right.front().arrive>current_time) current_time=right.front().arrive;
                        }
                        else
                        {
                            if(left.front().arrive>current_time) current_time=left.front().arrive;
                            side=false;
                            current_time+=period;
                        }
                    }
                }
                else
                {
                    current_time+=period;
                }
            }
        }
        sort(out.begin(),out.end());
        for(i=0; i<out.size(); i++) printf("%d\n",out[i].reach);
        if(t) nl;
    }
    return 0;
}
