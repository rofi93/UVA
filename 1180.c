#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,p,a[100000],j,y,z,b,m,o,x;
    char c,d;

        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            if(i!=n)
                scanf("%c",&d);
        }
        for(i=1;i<=n;i++){
        if(a[i]==2 || a[i]==3||a[i]==5||a[i]==7||a[i]==13)
         printf("Yes\n");
        else if(a[i]==17||a[i]==19||a[i]==31)
            printf("Yes\n");
        else printf("No\n");
        }
    return 0;
}
