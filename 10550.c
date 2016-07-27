#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    while(scanf("%d %d %d %d",&a,&b,&c,&d))
    {
        if(a==0 && b==0 && c==0 && d==0)
            break;
        sum=1080;
        if(a<b)
            sum+=(40+a-b)*9;
        else
            sum+=(a-b)*9;
        if(b>c)
            sum+=(40+c-b)*9;
        else
            sum+=(c-b)*9;
        if(c<d)
            sum+=(40+c-d)*9;
        else
            sum+=(c-d)*9;


        printf("%d\n",sum);
    }
    return 0;
}
