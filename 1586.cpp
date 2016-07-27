/* -------------------------------- */
/* Name: MD. Khairul Basar          */
/* Institute: HSTU                  */
/* Dept: CSE                        */
/* Email: khairul.basar93@gmail.com */
/* -------------------------------- */

#include<cmath>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<cstring>

#include<set>
#include<map>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<vector>
#include<sstream>
#include<utility>
#include<iostream>
#include<algorithm>

#include<bits/stdc++.h>
/* all header files included */

#define LL long long

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define pii pair<int,int>

#define nl printf("\n")
/* defining macros */

using namespace std;
bool number(char ch)
{
    if(ch>='0' && ch<='9')
        return true;
    return false;
}
int main()
{
    int t,n,i,C,H,O,N;
    double mass;
    double carbon=12.01,hydrogen=1.008,oxygen=16.00,nitrogen=14.01;
    string input;
    cin>>t;
    while(t--)
    {
        cin>>input;
        mass=C=H=O=N=0;
        for(i=0;i<input.size();i++)
        {
            char num[3];
            if(input[i]=='C')
            {
                if(number(input[i+1]))
                {
                    num[0]=input[i+1];

                    if(number(input[i+2]))
                        num[1]=input[i+2];
                    C+=atoi(num);
                }
                else
                    C++;
            }
            else if(input[i]=='H')
            {
                if(number(input[i+1]))
                {
                    num[0]=input[i+1];

                    if(number(input[i+2]))
                        num[1]=input[i+2];
                    H+=atoi(num);
                }
                else
                    H++;
            }
            else if(input[i]=='O')
            {
                if(number(input[i+1]))
                {
                    num[0]=input[i+1];

                    if(number(input[i+2]))
                        num[1]=input[i+2];
                    O+=atoi(num);
                }
                else
                    O++;
            }
            else if(input[i]=='N')
            {
                if(number(input[i+1]))
                {
                    num[0]=input[i+1];

                    if(number(input[i+2]))
                        num[1]=input[i+2];
                    N+=atoi(num);
                }
                else
                    N++;
            }
        }
        mass=(C*carbon)+(H*hydrogen)+(N*nitrogen)+(O*oxygen);
        printf("%.3lf",mass);
        nl;
    }
    return 0;
}

