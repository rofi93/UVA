#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n<0)
            break;
        if(n==1)
            printf("0%%\n");
        else
            printf("%lld%%\n",25*n);
    }
    return 0;
}
