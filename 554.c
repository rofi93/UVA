#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[100][21],str2[251],str3[251];
    int i,j,n,x1,x2,k;
    while(gets(str1[0]))
    {
        for(i=1;;i++)
        {
            gets(str1[i]);
            if(strcmp("#",str1[i])==0)
                break;
        }
        gets(str2);
    }
}
