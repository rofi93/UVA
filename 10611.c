#include<stdio.h>
int main()
{
    long int n,q,i,j,y,x[50000],max,min;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&x[i]);
    }
    scanf("%ld",&q);
    for(i=0;i<q;i++)
    {
        scanf("%ld",&y);
        max=0;
        min=2147483647;
        for(j=0;j<n;j++)
        {
            if(x[j]>max && x[j]<y)
                max=x[j];
            if(x[j]<min && x[j]>y)
                min=x[j];
        }
        if(max==0)
            printf("X %ld\n",min);
        else if(min==2147483647)
            printf("%ld X\n",max);
        else if(max==0 && min==2147483647)
            printf("X X\n");
        else
            printf("%ld %ld\n",max,min);
    }
    return 0;
}
