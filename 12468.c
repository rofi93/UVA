#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;

    while(scanf("%d %d",&a,&b))
    {
        if(a==-1 && b==-1)
            break;
        c=abs(a-b);
        if(c>50)
            c=100-c;
        printf("%d\n",c);
    }
    return 0;
}
