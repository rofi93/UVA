#include<stdio.h>
#include<string.h>
int main()
{
    char ch[110],d[10];
    int i,t;
    gets(d);
    t=atoi(d);
    for(i=1;i<=t;i++)
    {
        gets(ch);
        printf("Case %d:\n",i);
        printf("#include<string.h>\n#include<stdio.h>\n");
        printf("int main()\n{\nprintf(\"");
        printf("%s",ch);
        printf("\\");
        printf("n");
        printf("\");");
        printf("\n");
        printf("printf(\"");
        printf("\\");
        printf("n\");");
        printf("\n");
        printf("return 0;\n}");
    }
    return 0;
}
