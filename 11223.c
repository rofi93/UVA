#include<stdio.h>
#include<string.h>
#include<strings.h>
int main()
{
    int t,n,i,j,a;
    char c[5000],d[3];

    gets(d);
    a=atoi(d);
    for(i=1;i<=a;i++)
    {
        gets(c);
        n=strlen(c);
        for(j=0;j<n;j++)
        {
            if(c[j]=='.-')
                c[j]='A';
            else if(c[j]=='-...')
                c[j]='B';
            else if(c[j]=='-.-.')
                c[j]='C';
            else if(c[j]=='-..')
                c[j]='D';
            else if(c[j]=='.')
                c[j]='E';
            else if(c[j]=='..-.')
                c[j]='F';
            else if(c[j]=='- -.')
                c[j]='G';
            else if(c[j]=='....')
                c[j]='H';
            else if(c[j]=='..')
                c[j]='I';
            else if(c[j]=='.- - -')
                c[j]='J';
            else if(c[j]=='-.-')
                c[j]='K';
            else if(c[j]=='.-..')
                c[j]='L';
            else if(c[j]=='- -')
                c[j]='M';
            else if(c[j]=='-.')
                c[j]='N';
            else if(c[j]=='- - -')
                c[j]='O';
            else if(c[j]=='.- -.')
                c[j]='P';
            else if(c[j]=='- -.-')
                c[j]='Q';
            else if(c[j]=='.-.')
                c[j]='R';
            else if(c[j]=='...')
                c[j]='S';
            else if(c[j]=='-')
                c[j]='T';
            else if(c[j]=='..-')
                c[j]='U';
            else if(c[j]=='...-')
                c[j]='V';
            else if(c[j]=='.- -')
                c[j]='W';
            else if(c[j]=='-..-')
                c[j]='X';
            else if(c[j]=='-.- -')
                c[j]='Y';
            else if(c[j]=='- -..')
                c[j]='Z';
            else if(c[j]=='- - - - -')
                c[j]=48;
            else if(c[j]=='.- - - -')
                c[j]=49;
            else if(c[j]=='..- - -')
                c[j]=50;
            else if(c[j]=='...- -')
                c[j]=51;
            else if(c[j]=='....-')
                c[j]=52;
            else if(c[j]=='.....')
                c[j]=53;
            else if(c[j]=='-....')
                c[j]=54;
            else if(c[j]=='- -...')
                c[j]=55;
            else if(c[j]=='- - -..')
                c[j]=56;
            else if(c[j]=='- - - -.')
                c[j]=57;
            else if(c[j]=='.-.-.-')
                c[j]='.';
            else if(c[j]=='- -..- -')
                c[j]=',';
            else if(c[j]=='..- -..')
                c[j]='?';
            else if(c[j]=='.- - - -.')
                c[j]='\'';
            else if(c[j]=='-.-.- -')
                c[j]='!';
            else if(c[j]=='-..-.')
                c[j]='/';
            else if(c[j]=='-.- -.')
                c[j]='(';
            else if(c[j]=='-.- -.-')
                c[j]=')';
            else if(c[j]=='.-...')
                c[j]='&';
            else if(c[j]=='- - -...')
                c[j]=':';
            else if(c[j]=='-.-.-.')
                c[j]=';';
            else if(c[j]=='-...-')
                c[j]='=';
            else if(c[j]=='.-.-.')
                c[j]='+';
            else if(c[j]=='-....-')
                c[j]='-';
            else if(c[j]=='..- -.-')
                c[j]='_';
            else if(c[j]=='.-..-.')
                c[j]='"';
            else if(c[j]=='.- -.-.')
                c[j]='@';
        }
        printf("Message #%d\n%s\n\n",i,c);
    }
    return 0;
}
