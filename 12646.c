#include<stdio.h>
int main()
{
    int a,b,c,i,t;

    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
            if(a<0 || a>1 || b<0 || b>1 || c<0 || c>1)
                break;
            else
            {
            if(a==b && b==c)
                printf("*\n");
            else if(a==b && c!=a)
                printf("C\n");
            else if(a==c && b!=a)
                printf("B\n");
            else printf("A\n");
            }
    }
    return 0;
}
