#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,div=0,s;
    s=sqrt(n);
    for(i=2;i<=s;i++)
    {
        if(n%i==0)
        {
            div=1;
            break;
        }
    }
    if(div==0)
        return 1;
    else
        return 0;
}
int main()
{
    int i,n,c,t,p,x[1000],m,b,e;
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        printf("%d %d: ",n,c);
        p=0;
        for(i=1;i<=n;i++)
        {
            if(prime(i))
            {
                x[p++]=i;
            }
        }
        if(p%2==0)
        {
            c=c*2;
            m=p/2;
            b=m-(c/2);
            e=b+c;
        }
        else
        {
            c=(c*2)-1;
            m=(p/2)+1;
            b=m-(c/2)-1;
            e=b+c;
        }
        if(c>=p)
        {
            for(i=0;i<p;i++)
            {
                printf("%d",x[i]);
                if(i<p-1)
                    printf(" ");
            }
        }
        else
        {
            for(i=b;i<e;i++)
            {
                printf("%d",x[i]);
                if(i<e-1)
                    printf(" ");
            }
        }
        printf("\n\n");
    }
    return 0;
}
