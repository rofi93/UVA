#include<cstdio>
#include<cstring>
using namespace std;
bool palindrome(char s[])
{
    int i,j=0;
    if(strlen(s)==1)
        return true;
    for(i=strlen(s)-1;i>=strlen(s)/2;i--)
    {
        if(s[i]!=s[j++])
            return false;
    }
    return true;
}
bool mirror(char s[])
{
    int i,j;
    if(strlen(s)==1)
    {
        if(s[0]=='A' || s[0]=='H' || s[0]=='I' || s[0]=='J' || s[0]=='L' || s[0]=='M' || s[0]=='O' || s[0]=='T' || s[0]=='U' || s[0]=='V' || s[0]=='W' || s[0]=='X' || s[0]=='Y' || s[0]=='1' || s[0]=='8')
            return true;
        else
            return false;
    }
    for(i=strlen(s)-1,j=0;i>=strlen(s)/2;i--,j++)
    {
        if(s[j]=='A' && s[i]!='A')
            return false;
        else if(s[j]=='E' && s[i]!='3')
            return false;
        else if(s[j]=='H' && s[i]!='H')
            return false;
        else if(s[j]=='I' && s[i]!='I')
            return false;
        else if(s[j]=='J' && s[i]!='L')
            return false;
        else if(s[j]=='L' && s[i]!='J')
            return false;
        else if(s[j]=='M' && s[i]!='M')
            return false;
        else if(s[j]=='O' && s[i]!='O')
            return false;
        else if(s[j]=='S' && s[i]!='2')
            return false;
        else if(s[j]=='T' && s[i]!='T')
            return false;
        else if(s[j]=='U' && s[i]!='U')
            return false;
        else if(s[j]=='V' && s[i]!='V')
            return false;
        else if(s[j]=='W' && s[i]!='W')
            return false;
        else if(s[j]=='X' && s[i]!='X')
            return false;
        else if(s[j]=='Y' && s[i]!='Y')
            return false;
        else if(s[j]=='Z' && s[i]!='5')
            return false;
        else if(s[j]=='1' && s[i]!='1')
            return false;
        else if(s[j]=='2' && s[i]!='S')
            return false;
        else if(s[j]=='3' && s[i]!='E')
            return false;
        else if(s[j]=='5' && s[i]!='Z')
            return false;
        else if(s[j]=='8' && s[i]!='8')
            return false;
        else if(s[j]=='B' || s[j]=='C' || s[j]=='D' || s[j]=='F' || s[j]=='G' || s[j]=='K' || s[j]=='N' || s[j]=='P' || s[j]=='Q' || s[j]=='4' || s[j]=='6' || s[j]=='7' || s[j]=='9')
            return false;
        else if(s[j]<48 || (s[j]>57 && s[j]<65) || s[j]>90)
            return false;
    }
    return true;
}
int main()
{
    char s[21];
    bool mir,pal;
    while(scanf("%s",s)!=EOF)
    {
        pal=palindrome(s);
        mir=mirror(s);
        if(pal==true && mir==true)
            printf("%s -- is a mirrored palindrome.\n",s);
        else if(pal==true && mir==false)
            printf("%s -- is a regular palindrome.\n",s);
        else if(mir==true && pal==false)
            printf("%s -- is a mirrored string.\n",s);
        else if(mir==false && pal==false)
            printf("%s -- is not a palindrome.\n",s);
        printf("\n");
    }
    return 0;
}
