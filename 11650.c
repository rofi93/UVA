#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,t;
    char c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %c %d",&h1,&c,&m1);
        m2=60-m1;
        h2=12-h1;
        if(m2==60)
            m2=0;
        if(h2<=0)
            h2=12;
        if(m1>0)
            h2--;
        if(h2<=0)
            h2=12;
        printf("%02d:%02d\n",h2,m2);
    }
    return 0;
}
