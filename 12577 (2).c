#include<stdio.h>
int main()
{
    char str1[]= {"Hajj"}, str2[]= {"Umrah"}, str3[10];
    int i,j;
    for(i=1;; i++)
    {
        scanf("%s",str3);
        if(str3[0]=='*')
            break;
        else if(str1[4]=='\0' && str3[4]=='\0')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(str2[5]=='\0' && str3[5]=='\0')
            printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
