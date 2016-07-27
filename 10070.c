#include<stdio.h>
int main()
{
    long long int y,i,j;

    while(scanf("%lld",&y)!=EOF){

        if((y%4==0 && y%100!=0) || (y%100==0 && y%400==0)){
        for(i=1;i<=1;i++)
        {
            printf("This is leap year.\n");
            if(y%15==0)
                printf("This is huluculu festival year.\n");
            else if(y%55==0)
                printf("This is bulukulu festival year.\n");
        }
        }
        else if(y%15==0){
        for(i=1;i<=1;i++)
        {
            printf("This is huluculu festival year.\n");
            if(y%55==0)
                printf("This is bulukulu festival year.\n");
        }
        }
        else if(y%55==0)
            printf("This is bulukulu festival year.\n");
        else printf("This is an ordinary year.\n");
        printf("\n");
    }
    return 0;
}
