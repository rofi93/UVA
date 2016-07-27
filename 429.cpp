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
    int level[210],visited[210],i,j,t,assign,source,destination,top,x,tc=0;
    string str,src,dest,new_str;
    vector<string>vs;
    map<string,int>mymap1;
    map<int,string>mymap2;
    queue<int>Q;
    stringstream ss;

    scanf("%d",&t);
    while(t--)
    {
        vs.clear();
        mymap1.clear();
        mymap2.clear();
        memset(level,-1,200);
        assign=0;
        while(cin>>str)
        {
            if(str=="*")
                break;
            vs.push_back(str);
            mymap1[str]=assign;
            mymap2[assign]=str;
            assign++;
        }
        getline(cin,str);
        if(tc==0)
            tc=1;
        else
            printf("\n");
        while(getline(cin,str))
        {
            if(str=="")
                break;
            ss.clear();
            ss<<str;
            ss>>src;
            ss>>dest;
            memset(level,-1,200);
            source=mymap1[src];
            destination=mymap1[dest];
            level[source]=0;
            Q.push(source);
            while(!Q.empty())
            {
                top=Q.front();
                str=mymap2[top];
                for(i=0; i<str.size(); i++)
                {
                    new_str=str;
                    new_str[i]=96;
                    for(j=1; j<=26; j++)
                    {
                        new_str[i]=new_str[i]+1;
                        if(mymap1.find(new_str)!=mymap1.end())
                        {
                            x=mymap1[new_str];
                            if(level[x]==-1)
                            {
                                level[x]=level[top]+1;
                                Q.push(x);
                            }
                        }
                    }
                }
                Q.pop();
            }
            cout<<src<<" "<<dest<<" "<<level[destination]<<endl;
        }
    }
    return 0;
}
