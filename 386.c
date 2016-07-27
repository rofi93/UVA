#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j,k,l;
    for(i=6;i<=200;i++)
    {
        for(j=2;j<=i;j++)
        {
            for(k=j+1;k<=i;k++)
            {
                for(l=k+1;l<=i;l++)
                {
                    if(((l*l*l)+(k*k*k)+(j*j*j))==(i*i*i))
                    {
                        printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",i,j,k,l);
                    }
                }
            }
        }
    }
    return 0;
}
