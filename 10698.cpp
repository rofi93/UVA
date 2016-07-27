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

struct football
{
    int position,points,game_played,goal_scored,goal_suffered,goal_difference;
    double percentage;
    string name;
};

bool operator<(football A, football B)
{
    string left,right;
    if(A.points>B.points)
    {
        return true;
    }
    else if(A.points==B.points)
    {
        if(A.goal_difference>B.goal_difference)
        {
            return true;
        }
        else if(A.goal_difference==B.goal_difference)
        {
            if(A.goal_scored>B.goal_scored)
            {
                return true;
            }
            else if(A.goal_scored==B.goal_scored)
            {
                left=A.name;
                right=B.name;
                for(int i=0;i<left.size();i++)
                {
                    left[i]=tolower(left[i]);
                }
                for(int i=0;i<right.size();i++)
                {
                    right[i]=tolower(right[i]);
                }
                return left<right;
            }
            return false;
        }
        return false;
    }
    return false;
}

int main()
{
    int t,g,i,j,a,b,k,pos;
    string home,away,str;
    bool flag=false;
    char ch;
    while(cin>>t>>g)
    {
        if(!t && !g) break;
        if(flag) nl;
        flag=true;
        map<string,int>mps;
        map<int,string>mpi;
        vector<football>x;
        for(i=0; i<t; i++)
        {
            cin>>str;
            football temp;
            mps[str]=i;
            mpi[i]=str;
            temp.game_played=temp.goal_difference=temp.goal_scored=temp.goal_suffered=0;
            temp.name=str;
            temp.percentage=temp.points=temp.position=0;
            x.pb(temp);
        }
        for(i=0; i<g; i++)
        {
            cin>>home>>a>>ch>>b>>away;
            j=mps[home];
            k=mps[away];
            if(a>b)
            {
                x[j].points+=3;
            }
            else if(a<b)
            {
                x[k].points+=3;
            }
            else if(a==b)
            {
                x[j].points++;
                x[k].points++;
            }
            x[j].game_played++;
            x[k].game_played++;
            x[j].goal_scored+=a;
            x[k].goal_scored+=b;
            x[j].goal_suffered+=b;
            x[k].goal_suffered+=a;
        }
        for(i=0; i<x.size(); i++)
        {
            x[i].goal_difference=x[i].goal_scored-x[i].goal_suffered;
        }
        sort(x.begin(),x.end());
        x[0].position=1;
        for(i=1; i<x.size(); i++)
        {
            if(x[i].points==x[i-1].points)
            {
                if(x[i].goal_difference==x[i-1].goal_difference)
                {
                    if(x[i].goal_scored==x[i-1].goal_scored)
                    {
                        x[i].position=x[i-1].position;
                    }
                    else
                    {
                        x[i].position=i+1;
                    }
                }
                else
                {
                    x[i].position=i+1;
                }
            }
            else
            {
                x[i].position=i+1;
            }
        }
        for(i=0; i<x.size(); i++)
        {
            if(i==0 || x[i-1].position!=x[i].position) printf("%2d. ",x[i].position);
            else printf("    ");

            for(j=0; j<15-x[i].name.size(); j++) sp;
            cout<<x[i].name;sp;

            printf("%3d %3d %3d %3d %3d ",x[i].points,x[i].game_played,x[i].goal_scored,x[i].goal_suffered,x[i].goal_difference);

            x[i].percentage=(double)(x[i].points*100)/(double)(3*x[i].game_played);
            if(x[i].game_played) printf("%6.2lf\n",x[i].percentage);
            else printf("   N/A\n");
        }
    }
    return 0;
}
