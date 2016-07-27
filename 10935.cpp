#include<cctype>
#include<cstdlib>
#include<cstring>

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

#include<bits/stdc++.h>
/* all header files included */

#define LL long long

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define pii pair<int,int>

#define nl printf("\n")
/* defining macros */

using namespace std;
int main()
{
    int i,x,n,j;
    queue<int>q;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            q.push(i);
        }
        j=2*(n-1);
        printf("Discarded cards:");
        for(i=1;i<=j;i++)
        {
            if(i%2!=0)
            {
                if(i==1)
                    printf(" ");
                printf("%d",q.front());
                if(i<j-1)
                    printf(", ");
                q.pop();
            }
            else
            {
                x=q.front();
                q.pop();
                q.push(x);
            }
        }
        printf("\nRemaining card: %d\n",q.front());
        q.pop();
    }
    return 0;
}
