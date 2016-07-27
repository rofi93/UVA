#include<stdio.h>
#include<math.h>
int main()
{
    double l,a,c;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&l);
        c=acos(-1)*((l*l)/25);
        a=((l*l*3)/5)-c;
        printf("%.2lf %.2lf\n",c,a);
    }

    return 0;
}
