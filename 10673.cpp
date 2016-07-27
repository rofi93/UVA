#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    double x,k,p,q,sum,a,b;
    long int i,t,j,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf",&x,&k);
        sum=x/k;
        if(k==2)
        {
            cout<<"1 1\n";
            continue;
        }
        for(j=0;j<=k;j++)
        {
            a=j;
            for(l=0;l<=k;l++)
            {
                b=l;
                if(x==((sum*a)+(sum*b)))
                    break;
            }
            if(x==((sum*a)+(sum*b)))
                    break;
        }
        printf("%ld %ld\n",j,l);
    }
    return 0;
}
