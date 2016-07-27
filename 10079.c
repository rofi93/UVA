#include<stdio.h>
int main()
{
    long long int n,i,j;

    while(scanf("%lld",&n)){

        if(n<0)
            break;
        j=((n+1)*n)/2;
        printf("%lld\n",j+1);
    }
    return 0;
}
