#include<stdio.h>
#include<math.h>
int calculate(char str[])
{
    return 26 * 26 * (str[0]-'A') + 26 * (str[1]-'A') + (str[2]-'A');
}
int main()
{
    char str[10];
    long int part1,part2,i,t,j,n,k,num;
    scanf("%ld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%3s-%ld",str,&num);
        part1=calculate(str);
        part2=fabs(part1-num);
        if(part2<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
