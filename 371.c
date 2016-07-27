#include<stdio.h>
#include<math.h>
long long int count(long long int n)
{
    long long int i;
    for(i=0;;)
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n)+1;
        i++;
        if(n==1)
            break;
    }
    return i;
}
int main()
{
    long long int i,temp,a,b,max,n,c,d,num;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
            break;
        if(a>b)
        {
            temp=b;
            b=a;
            a=temp;
        }
        max=0;
        for(i=a;i<=b;i++)
        {
            n=count(i);
            if(n>max)
            {
                max=n;
                num=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,num,max);
    }
    return 0;
}
