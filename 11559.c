#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,b,h,w,H[20],W[20][15],i,j,total,a;

    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)!=EOF)
    {
        for(i=0;i<h;i++)
        {
            scanf("%lld",&H[i]);
            for(j=0;j<w;j++)
            {
                scanf("%lld",&W[i][j]);
            }
        }
        a=0;
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                total=n*H[i];
                if(n<=W[i][j])
                {
                    if(total<=b)
                    {
                        printf("%lld",total);
                        a++;
                        break;
                    }
                }
            }
            if(a==1)
                break;
        }
        if(a==0)
        {
            printf("stay home");
        }
        printf("\n");
    }
    return 0;
}
