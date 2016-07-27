#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double a,u,v,s,t,x,y;

    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else if(n==1)
        {
            s=0;
            a=0;
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(n==2)
        {
            s=0;
            t=0;
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3)
        {
            v=0;
            t=0;
            scanf("%lf %lf %lf",&u,&a,&s);
            x=(u*u)+2*a*s;
            v=(float)sqrt(x);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            u=0;
            t=0;
            scanf("%lf %lf %lf",&v,&a,&s);
            y=(v*v)-2*a*s;
            u=(float)sqrt(y);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }

    }
    return 0;
}
