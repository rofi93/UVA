#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstring>
/* all c header file */

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
/* all c++ header file */

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int matrix[23][23],i,j,k,tc=1,n,m,assign,u,v,w,Min,pos,sum;
    map<string,int>mymap1;
    map<int,string>mymap2;
    string S;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0)
            break;
        mymap1.clear();
        mymap2.clear();
        for(i=1;i<=22;i++)
        {
            for(j=1;j<=22;j++)
            {
                matrix[i][j]=10000;
                if(i==j)
                    matrix[i][j]=0;
            }
        }
        assign=1;
        for(i=1;i<=n;i++)
        {
            cin>>S;
            mymap1[S]=assign;
            mymap2[assign]=S;
            assign++;
        }
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            matrix[u][v]=w;
            matrix[v][u]=w;
        }
        for(k=1;k<=n;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
                }
            }
        }
        Min=10000;
        pos=1;
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=n;j++)
            {
                sum+=matrix[i][j];
            }
            if(sum<Min && sum>0)
            {
                Min=sum;
                pos=i;
            }
        }
        printf("Case #%d : ",tc++);
        cout<<mymap2[pos]<<endl;
    }
    return 0;
}
