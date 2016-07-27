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

bool matchAll(string Output, vector<string> Frags)
{
    int nMatched =0;
    for (int i=0; i<Frags.size(); i++)
        for (int j=0; j<Frags.size(); j++)

            if ( i != j && (Frags[i] + Frags[j] == Output || Frags[j] + Frags[i] == Output))  nMatched++, Frags[i] = "*", Frags[j] = "*";
    if (nMatched == Frags.size()/2) return true;
    return false;
}
int main()
{
    int N;
    char Input[10000];

    gets(Input);

    N = atoi(Input);
    for (int i=0; i<N; i++)
    {
        scanf("\n");
        int counter=0;

        int nFragments=0, nBits=0, OSize;
        vector<string> Frags;
        while(fgets(Input,10000,stdin))
        {
            string T;
            if (Input[0] == '\n') break;
            stringstream s(Input);
            s >> T;
            Frags.push_back(T);
            nFragments++;
            nBits += (int)T.length();
        }

        if (i == N-1) nBits++;
        OSize = (2*nBits)/nFragments;

        string FinalOutput;
        for (int i=0; i<Frags.size(); i++)
            for (int j=0; j<Frags.size(); j++)
            {
                string Output;
                if (i != j && (int)Frags[i].length() + (int)Frags[j].length() == OSize)
                {
                    Output = Frags[i] + Frags[j];
                    if (matchAll(Output, Frags))
                    {
                        FinalOutput = Output;
                        break;
                    }
                }
            }

        cout << FinalOutput << endl;

        if (i != N-1) cout << endl;

    }
    return 0;
}
