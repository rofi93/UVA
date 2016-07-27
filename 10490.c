#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,m,o;
    int n,p,i,j,y,z,q;

    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else if(n!=2 && n%2==0)
                printf("Given number is NOT prime! NO perfect number is available.\n");
        else if(n==1)
            printf("Perfect: 1!\n");
        else if(n>=2)
        {
            z=0;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                    z++;
            }
            if(z==0)
            {
                m=pow(2,n)-1;
                p=(int)sqrt(m);
                y=0;
                for(i=2;i<=p;i++)
                {
                    if(m%i==0)
                        y++;
                }
                if(y==0)
                {
                    q=n-1;
                    o=pow(2,q);
                    x=m*o;
                    printf("Perfect: %lld!\n",x);
                }
                else if(y>0)
                    printf("Given number is prime. But, NO perfect number is available.\n");
            }
            else if(z>0)
                printf("Given number is NOT prime! NO perfect number is available.\n");
        }

    }
    return 0;
}
