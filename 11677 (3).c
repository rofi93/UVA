#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,h,m,x,y;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2))
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        m=m2-m1;
        h=h2-h1;
        if(m<0)
        {
            m=m+60;
            h=h-1;
        }
        if(h<0)
        {
            h=h+24;
        }
        x=(h*60)+m;
            printf("%d\n",x);
    }
    return 0;
}
