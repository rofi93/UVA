#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long int B,S,b[10000],s[10000],c=1,i;
    while(scanf("%ld %ld",&B,&S))
    {
        if(B==0 && S==0)
            break;
        for(i=0;i<B;i++)
        {
            scanf("%ld",&b[i]);
        }
        for(i=0;i<S;i++)
        {
            scanf("%ld",&s[i]);
        }
        if(B<=S)
        {
            printf("Case %ld: 0\n",c++);
        }
        else
        {
            sort(b,b+B);
            printf("Case %ld: %ld %ld\n",c++,B-S,b[0]);
        }
    }
    return 0;
}
