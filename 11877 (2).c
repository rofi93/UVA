#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,l;

    while(scanf("%d",&n))
    {

        if(n==0)
            break;
        j=0;
        k=0;
        for(i=0;i<=n;i++)
        {
            if(n%3==0)
            {
                j=j+k+(n/3);
                n=n/3;
            }
            else if(n%3==1)
            {
                j=j+k+(n/3);
                k=n%3;
                n=j;
            }
            else if(n%3==2)
            {
                j=j+k+(n/3);
                n=(n/3)+2;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
