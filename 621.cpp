#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char s[201];
    int i,n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        i=strlen(s);
        if(i<=2)
        {
            if(s[0]=='1' || s[0]=='4' || (s[0]=='7' && s[1]=='8'))
                printf("+\n");
        }
        else
        {
            if(s[i-1]=='5' && s[i-2]=='3')
                printf("-\n");
            else if(s[0]=='9' && s[i-1]=='4')
                printf("*\n");
            else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
                printf("?\n");
        }
    }
    return 0;
}
