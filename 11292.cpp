#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstring>
/* all c header files */

#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<algorithm>
#include<utility>
#include<sstream>
/* all c++ header files */

#include<bits/stdc++.h>
/* all header files included */

#define pb(a) push_back(a)

/* defining macros */

using namespace std;

int main()
{
    int i,j,k,n,m,x[20000],y[20000],count,cost;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&y[i]);
        }
        if(m<n)
        {
            printf("Loowater is doomed!");
        }
        else
        {
            sort(x,x+n);
            sort(y,y+m);
            count=cost=j=0;
            for(i=0;i<n;i++)
            {
                for(;j<m;j++)
                {
                    if(y[j]>=x[i] && y[j]!=-1)
                    {
                        count++;
                        cost+=y[j];
                        y[j]=-1;
                        break;
                    }
                }
                if(count==n)
                    break;
            }
            if(count==n)
            {
                printf("%d",cost);
            }
            else
            {
                printf("Loowater is doomed!");
            }
        }
        printf("\n");
    }
    return 0;
}
