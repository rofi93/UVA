#include<stdio.h>
#include<math.h>
float min(float x,float y)
{
    if(x>y)
        return y;
    else return x;
}
float abs(float x,float y)
{
    if(x>y)
        return x-y;
    else return y-x;
}
int main()
{
    int i,n,h,m;
    float a,M,H,ans;
    char c;

    while(scanf("%d%c%d",&h,&c,&m))
    {
        if(h==0 && m==0)
            break;
        if(h==12)
        {
            h=0;
        }
        M=m*6;
        H=(h*30)+((float)m*.5);
        ans=abs(M,H);
        ans=min(360-ans,ans);
        printf("%.3f\n",ans);
    }
    return 0;
}
