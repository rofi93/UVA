#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,r,i,x,y,x1,y1,x2,y2,x3,y3,x4,y4,l,w;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&r);
        l=5*r;
        w=(3*r)/2;
        y=(55*l)/100;
        x=(45*l)/100;
        x1=0-x;
        y1=0+w;
        x2=0+y;
        y2=0+w;
        x3=0+y;
        y3=0-w;
        x4=0-x;
        y4=0-w;
        printf("Case %lld:\n",i);
        printf("%lld %lld\n",x1,y1);
        printf("%lld %lld\n",x2,y2);
        printf("%lld %lld\n",x3,y3);
        printf("%lld %lld\n",x4,y4);
    }
    return 0;
}
