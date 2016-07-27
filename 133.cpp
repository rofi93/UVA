#include<cstdio>
#include<iostream>
#include<list>
#include<cmath>
using namespace std;
int main()
{
    int n,i,m,k,j,x,y;
    while(cin>>n>>k>>m)
    {
        if(n==0 && k==0 && m==0)
            break;
        list<int>l1;
        list<int>l2;
        for(i=1,j=n; i<=n,j>0; i++,j--)
        {
            l1.push_back(i);
            l2.push_back(j);
        }
        while(l1.size()>0 && l2.size()>0)
        {
            for(i=1; i<k; i++)
            {
                x=l1.front();
                l1.pop_front();
                l1.push_back(x);
            }
            for(i=1; i<m; i++)
            {
                x=l2.front();
                l2.pop_front();
                l2.push_back(x);
            }
            x=l1.front();
            y=l2.front();
            l1.remove(x);
            l2.remove(x);
            l2.remove(y);
            l1.remove(y);
            if(x==y)
            {
                printf("%3d",x);
            }
            else
            {
                printf("%3d",x);
                printf("%3d",y);
            }
            if(l1.size()>0 || l2.size()>0)
                printf(",");
        }
        printf("\n");
    }
    return 0;
}
