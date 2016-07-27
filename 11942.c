#include<stdio.h>
int main()
{
    int a[10],i,j,t,k,temp,n;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    for(i=1; i<=t; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&a[j]);
        }
        if(a[0]<a[1])
        {
            n=0;
            for(j=0; j<10; j++)
            {
                for(k=j+1; k<10; k++)
                {
                    if(a[j]>a[k])
                    {
                        temp=a[j];
                        a[j]=a[k];
                        a[k]=temp;
                        n++;
                    }
                }
            }
        }
        if(a[0]>a[1])
        {
            n=0;
            for(j=0; j<10; j++)
            {
                for(k=j+1; k<10; k++)
                {
                    if(a[j]<a[k])
                    {
                        temp=a[j];
                        a[j]=a[k];
                        a[k]=temp;
                        n++;
                    }
                }
            }
        }
        if(n==0)
        {
            printf("Ordered\n");
        }
        else if(n>0)
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
