#include<stdio.h>
#include<math.h>
int main()
{
    long long int n[1000],i,j,num,parity;

    while(scanf("%lld",&num)!=EOF)
    {
        if(num==0)
            break;
        for(i=0;;i++)
        {
            n[i]=num%2;
            if(num==0)
                break;
            num=num/2;
        }
        parity=0;
        for(j=i-1;j>=0;j--)
        {
            if(n[j]==1)
                parity++;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",n[j]);
        }
        printf(" is %lld (mod 2).\n",parity);
    }
    return 0;
}
