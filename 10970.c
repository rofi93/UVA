#include<stdio.h>
int main()
{
    long int m,n,i;
    while(scanf("%ld %ld",&m,&n)!=EOF){

        i=m*n;
        printf("%ld\n",i-1);
    }
    return 0;
}
