#include<stdio.h>
#include<string.h>
#include<strings.h>
int main()
{
    int i,j,n;
    char c[2000];

    while(gets(c))
    {
        n=strlen(c);
        for(i=0;i<n;i++)
        {
            if(c[i]=='W')
                c[i]='Q';
            else if(c[i]=='E')
                c[i]='W';
            else if(c[i]=='R')
                c[i]='E';
            else if(c[i]=='T')
                c[i]='R';
            else if(c[i]=='Y')
                c[i]='T';
            else if(c[i]=='U')
                c[i]='Y';
            else if(c[i]=='I')
                c[i]='U';
            else if(c[i]=='O')
                c[i]='I';
            else if(c[i]=='P')
                c[i]='O';
            else if(c[i]=='[')
                c[i]='P';
            else if(c[i]=='S')
                c[i]='A';
            else if(c[i]=='D')
                c[i]='S';
            else if(c[i]=='F')
                c[i]='D';
            else if(c[i]=='G')
                c[i]='F';
            else if(c[i]=='H')
                c[i]='G';
            else if(c[i]=='J')
                c[i]='H';
            else if(c[i]=='K')
                c[i]='J';
            else if(c[i]=='L')
                c[i]='K';
            else if(c[i]==';')
                c[i]='L';
            else if(c[i]=='X')
                c[i]='Z';
            else if(c[i]=='C')
                c[i]='X';
            else if(c[i]=='V')
                c[i]='C';
            else if(c[i]=='B')
                c[i]='V';
            else if(c[i]=='N')
                c[i]='B';
            else if(c[i]=='M')
                c[i]='N';
            else if(c[i]==',')
                c[i]='M';
            else if(c[i]=='.')
                c[i]=',';
            else if(c[i]=='/')
                c[i]='.';
            else if(c[i]==49)
                c[i]='`';
            else if(c[i]==50)
                c[i]=49;
            else if(c[i]==51)
                c[i]=50;
            else if(c[i]==52)
                c[i]=51;
            else if(c[i]==53)
                c[i]=52;
            else if(c[i]==54)
                c[i]=53;
            else if(c[i]==55)
                c[i]=54;
            else if(c[i]==56)
                c[i]=55;
            else if(c[i]==57)
                c[i]=56;
            else if(c[i]==48)
                c[i]=57;
            else if(c[i]=='-')
                c[i]=48;
            else if(c[i]=='=')
                c[i]='-';
            else if(c[i]=='\'')
                c[i]=';';
            else if(c[i]==']')
                c[i]='[';
            else if(c[i]=='\\')
                c[i]=']';
        }
        printf("%s\n",c);
    }
    return 0;
}
