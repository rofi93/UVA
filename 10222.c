#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    int i,n,t;

    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]=='e' || ch[i]=='E')
            ch[i]='q';
        else if(ch[i]=='r' || ch[i]=='R')
            ch[i]='w';
        else if(ch[i]=='t' || ch[i]=='T')
            ch[i]='e';
        else if(ch[i]=='y' || ch[i]=='Y')
            ch[i]='r';
        else if(ch[i]=='u' || ch[i]=='U')
            ch[i]='t';
        else if(ch[i]=='i' || ch[i]=='I')
            ch[i]='y';
        else if(ch[i]=='o' || ch[i]=='O')
            ch[i]='u';
        else if(ch[i]=='p' || ch[i]=='P')
            ch[i]='i';
        else if(ch[i]=='[' || ch[i]=='{')
            ch[i]='o';
        else if(ch[i]==']' || ch[i]=='}')
            ch[i]='p';
        else if(ch[i]=='d' || ch[i]=='D')
            ch[i]='a';
        else if(ch[i]=='f' || ch[i]=='F')
            ch[i]='s';
        else if(ch[i]=='g' || ch[i]=='G')
            ch[i]='d';
        else if(ch[i]=='h' || ch[i]=='H')
            ch[i]='f';
        else if(ch[i]=='j' || ch[i]=='J')
            ch[i]='g';
        else if(ch[i]=='k' || ch[i]=='K')
            ch[i]='h';
        else if(ch[i]=='l' || ch[i]=='L')
            ch[i]='j';
        else if(ch[i]==';' || ch[i]==':')
            ch[i]='k';
        else if(ch[i]=='\'' || ch[i]=='\'')
            ch[i]='l';
        else if(ch[i]=='c' || ch[i]=='C')
            ch[i]='z';
        else if(ch[i]=='v' || ch[i]=='V')
            ch[i]='x';
        else if(ch[i]=='b' || ch[i]=='B')
            ch[i]='c';
        else if(ch[i]=='n' || ch[i]=='N')
            ch[i]='v';
        else if(ch[i]=='m' || ch[i]=='M')
            ch[i]='b';
        else if(ch[i]==',' || ch[i]=='<')
            ch[i]='n';
        else if(ch[i]=='.' || ch[i]=='>')
            ch[i]='m';
        else if(ch[i]=='\\' || ch[i]=='\\')
            ch[i]=';';
        else if(ch[i]=='/' || ch[i]=='/')
            ch[i]=',';
        else if(ch[i]=='2')
            ch[i]='`';
        else if(ch[i]=='3')
            ch[i]='1';
        else if(ch[i]=='4')
            ch[i]='2';
        else if(ch[i]=='5')
            ch[i]='3';
        else if(ch[i]=='6')
            ch[i]='4';
        else if(ch[i]=='7')
            ch[i]='5';
        else if(ch[i]=='8')
            ch[i]='6';
        else if(ch[i]=='9')
            ch[i]='7';
        else if(ch[i]=='0')
            ch[i]='8';
        else if(ch[i]=='-')
            ch[i]='9';
        else if(ch[i]=='=')
            ch[i]='0';
    }
    printf("%s\n",ch);

    return 0;
}
