#include<stdio.h>
int add_digs(long long int a)
{
    long long int i,j,k,l;
    j=0;
    k=0;
    l=a;
    for(i=1;;i++)
    {
        j=l%10;
        k=k+j;
        if(l==0)
            break;
        l=l/10;
    }
    return k;
}
int main()
{
    long long int n,i,j,k,l,m;

    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        m=n;
        for(i=0;;i++)
        {
            l=add_digs(m);
            m=l;
            if(m<10)
                break;
        }

        printf("%lld\n",m);
    }
    return 0;
}
