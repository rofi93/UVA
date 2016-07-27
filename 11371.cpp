#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long int x[20],n,i,low,high,dif,j,rem,k;
    while(scanf("%lld",&n)!=EOF)
    {
        i=0;
        while(n)
        {
            x[i]=n%10;
            n=n/10;
            i++;
        }
        sort(x,x+i);
        low=high=dif=rem=0;
        for(j=i-1;j>=0;j--)
        {
            high=(high*10)+x[j];
        }
        for(j=0;j<i;j++)
        {
            if(x[j])
                low=(low*10)+x[j];
            else
            {
                while(x[j]==0)
                {
                    rem++;
                    j++;
                }
                low=x[j];
                while(rem)
                {
                    low=(low*10)+0;
                    rem--;
                }
            }
        }
        dif=high-low;
        printf("%lld - %lld = %lld = 9 * %lld\n",high,low,dif,dif/9);
    }
    return 0;
}
