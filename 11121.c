#include<stdio.h>
int main()
{
    long int n,i,j,x[100],t,k;
    scanf("%ld",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%ld",&n);
        for(i=0;; i++)
        {
            x[i]=n%(-2);
            n=n/(-2);
            if(x[i]<0)
            {
                x[i]+=2;
                n+=1;
            }
            if(n==0)
                break;
        }
        printf("Case #%ld: ",k);
        for(j=i; j>=0; j--)
        {
            printf("%ld",x[j]);
        }
        printf("\n");
    }
    return 0;
}
