#include<stdio.h>
int GCD(int a,int b)
{
    int l,r;
    for(l=0;;l++)
    {
        r=a%b;
        if(r==0)
            break;
        a=b;
        b=r;
    }
    return b;
}
int main()
{
    long long int G;
    int i,j,n,m,c;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        G=0;
        for(j=1;j<n;j++)
        {
            for(i=j+1;i<=n;i++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%lld\n",G);
    }

    return 0;
}
