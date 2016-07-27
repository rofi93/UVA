#include<stdio.h>
#include<math.h>
int main()
{
    double x[1000],sum,avg,total,dif;
    long long int i,n,frac;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;

        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&x[i]);
            sum+=x[i];
        }
        avg=sum/n;
        total=0;
        for(i=0;i<n;i++)
        {
            total+=fabs(x[i]-avg);
        }
        total=total/2;
        printf("%.2lf\n",total);
    }
    return 0;
}
