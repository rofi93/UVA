#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<cmath>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)

using namespace std;

int N,temp,S,sum,CASE;
vector<vector<int> > inp;
vector<int> get;
int main()
{
    CASE=1;
    while(1)
    {
        cin>>N;
        if(!N)
            break;
        inp.clear();
        FOR(i,N)
        {
            get.clear();
            FOR(j,N)
            {
                cin>>temp;
                get.push_back(temp);
            }
            inp.push_back(get);
        }
        sum=0;
        printf("Case %d:",CASE++);
        while(!inp.empty())
        {
            S=inp.size();
            FOR(i,S)
            sum+=inp[0][i];
            inp.erase(inp.begin());
            if(inp.empty())
                break;
            S=inp.size()-1;
            temp=inp[S].size();
            FOR(i,temp)
            sum+=inp[S][i];
            inp.pop_back();
            if(inp.empty())
                break;
            S=inp.size();
            for(int i=0; i<S; i++)
            {
                sum+=inp[i][0];
                inp[i].erase(inp[i].begin());
                sum+=inp[i][inp[i].size()-1];
                inp[i].pop_back();
            }
            printf(" %d",sum);
            S=inp.size();
            sum=0;
        }
        printf(" %d",sum);
        printf("\n");
    }
    return 0;
}
