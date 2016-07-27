#include<stdio.h>
int main()
{
    int n,c=1;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        printf("Case %d: %d\n",c++,n/2);
    }
    return 0;
}
