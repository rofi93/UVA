#include<stdio.h>
#include<math.h>
int main()
{
    long long int max,min,n,i,x[100010],dif,t,j;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        min=-1000000000;
        dif=-1000000000;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x[i]);
            if(min-x[i]>dif)
                dif=min-x[i];
            if(x[i]>min)
                min=x[i];
        }
        printf("%lld\n",dif);
    }
    return 0;
}
