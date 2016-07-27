#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n,t,tc=1,rx[100],ry[100],r[100],Y,y,x,a,b,c,d,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>Y;
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&rx[i],&ry[i],&r[i]);
        }
        printf("Case %d:\n",tc++);
        for(i=0;i<Y;i++)
        {
            cin>>x>>y;
            for(j=0;j<n;j++)
            {
                a=rx[j]-x;
                b=ry[j]-y;
                c=a*a;
                d=b*b;
                z=r[j]*r[j];
                if((c+d)<=z)
                    break;
            }
            if(j<n)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
