#include<stdio.h>
int main()
{
    long int n,num,i,j,k,l;
    while(scanf("%ld",&n)!=EOF)
    {
        long int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%ld",&a[i][j]);
            }
        }
        if(n%2==0)
        {
            l=n/2;
        }
        else
        {
            l=(n/2)+1;
        }
        num=0;
        for(k=0;k<l;k++)
        {
            for(j=0;j<n;j++)
            {
                num+=a[k][j]+a[n-1][j];
            }
        }
    }
    return 0;
}
