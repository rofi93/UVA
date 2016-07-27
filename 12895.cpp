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
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>

#include<bits/stdc++.h>
/* all header files included */

#define LL long long
#define pii pair<int,int>

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define sp printf(" ")
#define nl printf("\n")

#define tc1(x) printf("Case %d: ",x)
#define tc2(x) printf("Case #%d: ",x)
#define pr1(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
/* defining macros */

using namespace std;

int dx4[]={1,-1,0,0};
int dy4[]={0,0,1,-1};
int dx8[]={1,-1,0,0,-1,1,-1,1};
int dy8[]={0,0,1,-1,1,1,-1,-1};
int dkx8[]={-1,1,-1,1,-2,-2,2,2};
int dky8[]={2,2,-2,-2,1,-1,1,-1};
/* direction array */

int main()
{
    int n,i,j,t,num;
    char str[15];
    double sum;
    cin>>t;
    while(t--)
    {
        scanf("%s",str);
        num=atoi(str);
        n=strlen(str);
        sum=0;
        for(i=0;i<n;i++)
        {
            j=str[i]-48;
            sum+=pow(j,n);
        }
        if(sum==num)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}

