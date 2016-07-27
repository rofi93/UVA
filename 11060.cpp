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
    vector<string>vstr;
    map<string,int>mymap;
    map<int,string>mymap2;
    string str,str1,str2;
    int indegree[101],node,edge,node1,node2,i,j,count,n,m,assign,x,tc=1;
    while(scanf("%d",&node)!=EOF)
    {
        mymap.clear();
        mymap2.clear();
        vstr.clear();
        for(i=0; i<101; i++)
        {
            v[i].clear();
            indegree[i]=0;
        }
        assign=1;
        for(i=1; i<=node; i++)
        {
            cin>>str;

            mymap[str]=assign;
            mymap2[assign]=str;
            assign++;
        }
        scanf("%d",&m);
        for(i=1; i<=m; i++)
        {
            cin>>str1>>str2;
            node1=mymap[str1];
            node2=mymap[str2];
            indegree[node2]++;
            v[node1].push_back(node2);
        }
        count=0;
        while(count<node)
        {
            for(i=1; i<=node; i++)
            {
                if(indegree[i]==0)
                {
                    str=mymap2[i];
                    vstr.push_back(str);
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
        printf("Case #%d: Dilbert should drink beverages in this order: ",tc++);
        for(i=0; i<vstr.size(); i++)
        {
            cout<<vstr[i];
            if(i<vstr.size()-1)
                printf(" ");
        }
        printf(".\n\n");
    }
    return 0;
}
