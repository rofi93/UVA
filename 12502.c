#include<stdio.h>
int main()
{
    int t,x,y,z,d,i,hr;
    float avg,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        hr=x+y;
        avg=(float)z/(float)hr;
        d=0;
        if(x>y)
        {
            d=x-y;
        }
        x=x+d;
        a=avg*x;
        printf("%.0f\n",a);
    }
    return 0;
}
