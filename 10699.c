#include<stdio.h>
#include<math.h>
int main()
{
    long long int x[100],n,i,count,num,s,j;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        num=n;
        i=2;
        count=1;
        j=0;
        s=sqrt(n);
        while(i<=s)
        {
            if(n%i!=0)
                i++;
            else
            {
                x[j++]=i;
                n=n/i;
                if(x[j-2]!=x[j-1] && j>1)
                    count++;
            }
        }
        if(n>1)
            x[j++]=n;
        if(x[j-1]!=x[j-2] && j>1 && n>1)
            count++;
        printf("%lld : %lld\n",num,count);
    }
    return 0;
}
