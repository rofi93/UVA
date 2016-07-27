#include<stdio.h>
#include<math.h>
int main()
{
    long long int n[100000],i,j,num;

    while(scanf("%lld",&num)!=EOF)
    {
        if(num<0)
            break;
        if(num==0)
        {
            printf("0\n");
            continue;
        }
        for(i=0;;i++)
        {
            n[i]=num%3;
            if(num==0)
                break;
            num=num/3;
        }
        for(j=i-1;j>=0;j--)
        {
            printf("%d",n[j]);
        }
        printf("\n");
    }
    return 0;
}
