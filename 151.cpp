#include<cstdio>
#include<iostream>
#include<cmath>
#include<list>
using namespace std;
int main()
{
    int i,j,n,m,x;
    bool flag;
    while(cin>>n)
    {
        if(n==0)
            break;
        list<int>l;
        flag=true;
        for(i=1; i<=n; i++)
        {
            l.push_back(i);
        }
        m=1;
        while(flag)
        {
            for(i=1;; i+=m)
            {
                if(l.size()==1)
                    break;
                if(i==1)
                {
                    l.remove(i);
                    continue;
                }
                for(j=1;j<m;j++)
                {
                    x=l.front();
                    l.pop_front();
                    l.push_back(x);
                }
                x=l.front();
                l.remove(x);
                if(x==13)
                    break;
            }
            if(l.size()==1 && l.front()==13)
                flag=false;
            else
            {
                l.clear();
                for(i=1; i<=n; i++)
                {
                    l.push_back(i);
                }
                m++;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
