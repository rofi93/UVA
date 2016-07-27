#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long
#define MX 100000
#define MOD 1000000007


int main()
{
    char sentence[110][110];
    int mx_sentence=0,mx_length=0;

    for(int i=0;i<110;i++)
        for(int j=0;j<110;j++)
            sentence[i][j]=' ';

    while(gets(sentence[mx_sentence]))
    {
        //mx_length=max(mx_length, strlen(sentence[mx_sentence]));//.length());
        int length=strlen(sentence[mx_sentence]);
        sentence[mx_sentence][length]=' ';
        mx_length=max(mx_length,length);
        mx_sentence++;
    }
    //cout<<mx_length<<endl;
    for(int i=0;i<mx_length;i++)
        {
            for(int j=mx_sentence-1;j>=0;j--)
                cout<<sentence[j][i];
            cout<<endl;
        }
return 0;
}
