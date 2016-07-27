#include<stdio.h>
int main()
{
    float h,u,d,f,sum;
    int i,a;
    while(scanf("%f %f %f %f",&h,&u,&d,&f))
    {
        if(h==0 && u==0 && d==0 && f==0)
            break;
        sum=a=0;
        f=(u*f)/100;
        for(i=1;;i++)
        {
            sum+=u;
            if(sum>h)
            {
                a=1;
                break;
            }
            sum=sum-d;
            if(sum<0)
            {
                a=2;
                break;
            }
            u=u-f;
            if(u<0)
                u=0;
        }
        if(a==1)
            printf("success on day %d\n",i);
        else if(a==2)
            printf("failure on day %d\n",i);
    }
    return 0;
}
