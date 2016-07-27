/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

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

map<string,int>mp;
struct football
{
    string name;
    LL points;
    LL wins;
    LL loses;
    LL ties;
    LL difs;
    LL played;
    LL scored;
    LL against;
};
football a[30];
bool operator<(struct football A, struct football B)
{
    string C,D;
    if(B.points<A.points)
        return true;
    else if(B.points==A.points)
    {
        if(B.wins<A.wins)
            return true;
        else if(B.wins==A.wins)
        {
            if(B.difs<A.difs)
                return true;
            else if(B.difs==A.difs)
            {
                if(B.scored<A.scored)
                    return true;
                else if(B.scored==A.scored)
                {
                    if(A.played<B.played)
                        return true;
                    else if(A.played==B.played)
                    {
                        C="";
                        D="";
                        for(int i=0;i<A.name.size();i++)
                        {
                            C+=tolower(A.name[i]);
                        }
                        for(int i=0;i<B.name.size();i++)
                        {
                            D+=tolower(B.name[i]);
                        }
                        return C<D;
                    }
                }
            }
        }
    }
    return false;
}
void reset(void)
{
    int i;
    for(i=0; i<30; i++)
    {
        a[i].points=a[i].wins=a[i].loses=a[i].ties=a[i].difs=a[i].played=a[i].scored=a[i].against=0;
        a[i].name="";
    }
}
bool number(char ch)
{
    if(ch>47 && ch<58)
        return true;
    return false;
}

int main()
{
    string team1,team2,tournament,team,details;
    LL i,t,goal1,goal2,n,m,t1,t2;
    bool at,sym;

    cin>>t;
    getchar();
    while(t--)
    {
        reset();
        mp.clear();
        getline(cin,tournament);
        cin>>n;
        getchar();
        for(i=0; i<n; i++)
        {
            getline(cin,team);
            a[i].name=team;
            mp[team]=i;
        }
        cin>>m;
        getchar();
        while(m--)
        {
            getline(cin,details);
            at=true;
            sym=true;
            team1="";
            team2="";
            goal1=goal2=0;
            for(i=0; i<details.size(); i++)
            {
                if(details[i]=='@' || details[i]=='#')
                {
                    if(details[i]=='#' && sym==true)
                        sym=false;
                    else if(details[i]=='#' && sym==false)
                        sym=true;
                    else if(details[i]=='@')
                        at=false;
                    continue;
                }
                if(at)
                {
                    if(number(details[i]) && sym==false)
                    {
                        goal1=(details[i]-48);
                        if(number(details[i+1]))
                        {
                            goal1=(goal1*10)+(details[i+1]-48);
                            i++;
                        }
                    }
                    else
                        team1+=details[i];
                }
                else
                {
                    if(number(details[i]) && sym==false)
                    {
                        goal2=(details[i]-48);
                        if(number(details[i+1]))
                        {
                            goal2=(goal2*10)+(details[i+1]-48);
                            i++;
                        }
                    }
                    else
                        team2+=details[i];
                }
            }
            t1=mp[team1];
            t2=mp[team2];
            if(goal1>goal2)
            {
                a[t1].points+=3;
                a[t1].wins++;
                a[t2].loses++;
            }
            else if(goal2>goal1)
            {
                a[t2].points+=3;
                a[t2].wins++;
                a[t1].loses++;
            }
            else if(goal1==goal2)
            {
                a[t1].points++;
                a[t2].points++;
                a[t1].ties++;
                a[t2].ties++;
            }
            a[t1].played++;
            a[t2].played++;
            a[t1].scored+=goal1;
            a[t2].scored+=goal2;
            a[t1].against+=goal2;
            a[t2].against+=goal1;
            a[t1].difs+=(goal1-goal2);
            a[t2].difs+=(goal2-goal1);
        }
        sort(a,a+n);
        cout<<tournament;
        nl;
        for(i=0;i<n;i++)
        {
            printf("%lld) ",i+1);
            cout<<a[i].name;
            printf(" %lldp, %lldg (%lld-%lld-%lld), %lldgd (%lld-%lld)\n",a[i].points,a[i].played,a[i].wins,a[i].ties,a[i].loses,a[i].difs,a[i].scored,a[i].against);
        }
        if(t)
            nl;
    }
    return 0;
}
