#include<stdio.h>
#include<math.h>
int main()
{
    int t,d,d1,d2,m,m1,m2,y,y1,y2,n,i,age;
    char c;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%c%d%c%d",&d2,&c,&m2,&c,&y2);
        scanf("%d%c%d%c%d",&d1,&c,&m1,&c,&y1);
        if(d1>d2)
        {
            d2=d2+30;
            m1=m1+1;
        }
        if(m1>m2)
        {
            m2=m2+12;
            y1=y1+1;
        }
        age=y2-y1;
        if(age<0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(age>130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,age);
    }

    return 0;
}
