#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int c=1;
    while(scanf("%s",s))
    {
        if(strcmp("#",s)==0)
            break;
        if(strcmp("HELLO",s)==0)
            printf("Case %d: ENGLISH\n",c++);
        else if(strcmp("HOLA",s)==0)
            printf("Case %d: SPANISH\n",c++);
        else if(strcmp("HALLO",s)==0)
            printf("Case %d: GERMAN\n",c++);
        else if(strcmp("BONJOUR",s)==0)
            printf("Case %d: FRENCH\n",c++);
        else if(strcmp("CIAO",s)==0)
            printf("Case %d: ITALIAN\n",c++);
        else if(strcmp("ZDRAVSTVUJTE",s)==0)
            printf("Case %d: RUSSIAN\n",c++);
        else
            printf("Case %d: UNKNOWN\n",c++);
    }
    return 0;
}
