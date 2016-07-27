#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j,k,p;

    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        j=1;
        k=1;
        p=1;
        for(i=0;;i++)
        {
            k=k*2;
            j=j+k;
            p++;
            if(j>=n)
                break;
        }
        if(p%2==0)
        {
            printf("Roberto\n");
        }
        else if(p%2!=0)
        {
            printf("Alicia\n");
        }
    }
    return 0;
}
