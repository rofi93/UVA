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
int matrix[110][110];
int main()
{
    int i,j,k,n,cost;
    char str[21];
    while(cin>>n)
    {
        for(i=1; i<110; i++)
        {
            for(j=1; j<110; j++)
            {
                matrix[i][j]=2000000;
                if(i==j)
                    matrix[i][j]=0;
            }
        }
        for(i=2; i<=n; i++)
        {
            for(j=1; j<i; j++)
            {
                scanf("%s",str);
                if(str[0]=='x' || str[0]=='X')
                {
                    //matrix[i][j]=-1;
                    //matrix[j][i]=-1;
                }
                else
                {
                    k=atoi(str);
                    matrix[i][j]=k;
                    matrix[j][i]=k;
                }
            }
        }
        for(k=1; k<=n; k++)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if (matrix[i][j]>matrix[i][k]+matrix[k][j])
                        matrix[i][j] = matrix[i][k]+matrix[k][j];
                }
            }
        }
        cost=0;
        for(i=1; i<=n; i++)
        {
            cost=max(cost,matrix[1][i]);
        }
        cout<<cost<<endl;
    }
    return 0;
}
