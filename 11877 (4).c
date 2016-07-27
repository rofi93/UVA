#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,l,m;

    while(scanf("%d",&n))
    {

        if(n==0)
            break;
        j=0;
        k=0;
        while(n>=3)
        {
            n=(n-3)+1;
            j++;
        }
        if(n==2)
        {
            j++;
        }

            printf("%d\n",j);
    }
    return 0;
}
