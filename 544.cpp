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

class traffic
{
public:
    int u;
    int v;
    traffic()
    {

    }
    traffic(int a, int b)
    {
        u=a;
        v=b;
    }
};

bool operator<(traffic A, traffic B)
{
    return A.v<B.v;
}

int main()
{
    int n,m,ass,i,weight,a,b,node1,node2,ans;
    bool visited[201];
    string in1,in2;
    string start,dest;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;

        map<string, int>mp;
        priority_queue<traffic>PQ;
        vi adjacent[201],cost[201];
        ass=1;
        for(i=0; i<m; i++)
        {
            cin>>in1>>in2>>weight;
            if(mp[in1]==0)
            {
                mp[in1]=ass++;
            }
            if(mp[in2]==0)
            {
                mp[in2]=ass++;
            }
            node1=mp[in1];
            node2=mp[in2];
            adjacent[node1].pb(node2);
            adjacent[node2].pb(node1);
            cost[node1].pb(weight);
            cost[node2].pb(weight);
        }
        cin>>start>>dest;
        node1=mp[start];
        node2=mp[dest];
        ans=INT_MAX;
        for(i=1; i<=n; i++)
            visited[i]=false;
        PQ.push(traffic(node1,0));
        traffic top;
        while(!PQ.empty())
        {
            top=PQ.top();
            PQ.pop();
            a=top.u;
            if(!visited[a])
            {
                visited[a]=true;
                if(top.v<ans && top.v)
                    ans=top.v;
                if(a==node2)
                    break;
                for(i=0;i<adjacent[a].size();i++)
                {
                    b=adjacent[a][i];
                    if(!visited[b])
                        PQ.push(traffic(adjacent[a][i],cost[a][i]));
                }
            }
        }
        printf("Scenario #%d\n",tc++);
        printf("%d tons\n",ans);
        nl;

    }
    return 0;
}
