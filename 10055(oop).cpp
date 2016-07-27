#include<cstdio>
using namespace std;
class hashmat
{
public:
    long int sub(long int h, long int i);
};
long int hashmat::sub(long int h, long int i)
{
    return h-i;
}
int main()
{
    hashmat hash;
    long int h,i;
    while(scanf("%ld %ld",&h,&i)!=EOF)
    {
        if(h>i)
            printf("%ld\n",hash.sub(h,i));
        else
            printf("%ld\n",hash.sub(i,h));
    }
    return 0;
}
