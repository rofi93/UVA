#include<stdio.h>
#include<math.h>
int main()
{
    int t,e,f,c,n,i,s,a,b;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&e,&f,&c);
        n=e+f;
        s=0;
        while(n>=c)
        {
            a=n/c;
            s=a+s;
            n=a+(n%c);
        }
        printf("%d\n",s);
    }
    return 0;
}
