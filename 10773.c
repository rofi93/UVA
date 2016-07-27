#include<stdio.h>
#include<math.h>
int main()
{
    double d,v,u,t1,t2,tc,i,res,s;
    scanf("%lf",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v>=u || v==0 || u==0)
        {
            printf("Case %.0lf: can't determine\n",i);
            continue;
        }
        t1=d/u;
        s=sqrt((u*u)-(v*v));
        t2=d/s;
        res=fabs(t2-t1);
        printf("Case %.0lf: %.3lf\n",i,res);
    }
    return 0;
}
