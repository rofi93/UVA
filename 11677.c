#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,h3,m3,x,y;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)){

        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        else if(h1>=h2)
            h3=h1-h2;
        else if(h2>=h1)
            h3=h2-h1;
        else if(m1>=m2)
            m3=m1-m2;
        else if(m2>=m1)
            m3=m2-m1;
        x=(h3*60)+m3;
            printf("%d\n",x);
    }
    return 0;
}
