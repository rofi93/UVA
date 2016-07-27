#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,y,s,i,j,a,b;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        s=sqrt(n);
        a=0;
        for(i=1;i<=s;i++)
        {
            for(j=1;j<=s;j++)
            {
                b=(j*j*j)-(i*i*i);
                if(b==n)
                {
                    a=1;
                    break;
                }
            }
            if(a==1)
                break;
        }
        if(a==0)
            printf("No solution\n");
        else
            printf("%lld %lld\n",j,i);
    }
    return 0;
}
