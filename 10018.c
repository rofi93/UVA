#include<stdio.h>
long long int reverse(long long int n)
{
    long long int i,x=0,r;
    for(i=0;; i++)
    {
        r=n%10;
        x=(x*10)+r;
        n=n/10;
        if(n==0)
            break;
    }
    return x;
}
int main()
{
    long long int num,i,rev,j,t;
    scanf("%lld",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%lld",&num);
        for(i=0;; i++)
        {
            rev=reverse(num);
            if(rev==num)
                break;
            num+=rev;
        }
        printf("%lld %lld\n",i,rev);
    }
    return 0;
}
