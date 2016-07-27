#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    vector<int>v[101];
    int i,j,k,n,indegree[101],edge,node,node1,node2,x,count;
    while(scanf("%d %d",&node,&edge))
    {
        if(node==0 && edge==0)
            break;
        for(i=0; i<101; i++)
        {
            v[i].clear();
            indegree[i]=0;
        }
        for(i=1; i<=edge; i++)
        {
            scanf("%d %d",&node1,&node2);
            v[node1].push_back(node2);
            indegree[node2]++;
        }
        count=1;
        while(count<=node)
        {
            for(i=1; i<=node; i++)
            {
                if(indegree[i]==0)
                {
                    printf("%d",i);
                    if(count<node)
                        printf(" ");
                    indegree[i]=-1;
                    break;
                }
            }
            for(j=0; j<v[i].size(); j++)
            {
                x=v[i][j];
                indegree[x]--;
            }
            count++;
        }
        printf("\n");
    }

    return 0;
}
