#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
long long int divisor(long long int n)
{
    long long int a=0,i,s,x;
    s=sqrt(n);
    for(i=2;i<=s;i++)
    {
        if(n%i==0)
            a++;
    }
    x=(a*2)+2;
    if((s*s)==n)
        x--;
    return x;
}
int main()
{
    long long int l,u,d[10000],div,max,n,i,j,k,num;

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&l,&u);
        max=num=0;
        for(j=l;j<=u;j++)
        {
            div=divisor(j);
            if(div>max)
            {
                max=div;
                num=j;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,num,max);
    }
    return 0;
}
