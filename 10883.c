#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,i,j,k,a;
    double n[50005],total,avg;

    while(scanf("%lld",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&a);
            for(j=0;j<a;j++)
            {
                scanf("%lf",&n[j]);
            }
            total=0;


                for(j=0;j<a;j++)
                {
                    total=total+n[j];
                }

            avg=total/a;
            printf("Case #%lld: %.3lf\n",i,avg);

        }
    }
    return 0;
}
