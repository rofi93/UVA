#include<stdio.h>
#include<string.h>
int main()
{
    char hbd[][20]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char str[101][101];
    int j,i,n,count_1,count_2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    count_1=count_2=0;
    if(n<=16)
    {
        for(i=0,j=0;j<16;i++,j++)
        {
            if(i==n)
            {
                i=0;
            }
            printf("%s: %s",str[i],hbd[j]);
            printf("\n");
        }
    }
    else
    {
        for(i=0,j=0;;i++,j++)
        {
            if(i==n)
            {
                i=0;
                count_1=1;
            }
            if(j==16)
            {
                j=0;
            }
            printf("%s: %s",str[i],hbd[j]);
            printf("\n");
            if(count_1==1 && j==15)
                break;
        }
    }
    return 0;
}
