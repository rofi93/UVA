#include<stdio.h>
#include<string.h>
int vowel(char x)
{
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        return 1;
    else
        return 0;
}
int main()
{
    int l,n,i,len,j,a;
    char irr_sin[25][25],irr_plu[25][25],reg[25];
    while(scanf("%d %d",&l,&n)!=EOF)
    {
        for(i=0;i<l;i++)
        {
            scanf("%s %s",irr_sin[i],irr_plu[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%s",reg);
            len=strlen(reg);
            a=0;
            for(j=0;j<l;j++)
            {
                if(strcmp(reg,irr_sin[j])==0)
                {
                    a=1;
                    printf("%s\n",irr_plu[j]);
                    break;
                }
            }
            if(a==0)
            {
                if(reg[len-1]=='y' && !vowel(reg[len-2]))
                {
                    for(j=0;j<len-1;j++)
                        printf("%c",reg[j]);
                    printf("ies\n");
                }
                else if(reg[len-1]=='o' || reg[len-1]=='s' || reg[len-1]=='x' || (reg[len-1]=='h' && reg[len-2]=='c')|| (reg[len-1]=='h' && reg[len-2]=='s'))
                {
                    printf("%s",reg);
                    printf("es\n");
                }
                else
                {
                    printf("%s",reg);
                    printf("s\n");
                }
            }
        }
    }
    return 0;
}
