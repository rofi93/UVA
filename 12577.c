#include<stdio.h>
int main()
{
    char ch;
    int i;

    for(i=1;;i++)
    {
        scanf("%c",&ch);
        if(ch=='*')
            break;
        else if(ch=='Hajj')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(ch=='Umrah')
            printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}
