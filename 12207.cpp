#include<cstdio>
#include<cmath>
#include<iostream>
#include<list>
using namespace std;
int main()
{
    long int p,c,cas=1,x,n,i,j,loop;
    list<long int>l;
    char ch;
    while(scanf("%ld %ld",&p,&c)!=EOF)
    {
        if(p==0 && c==0)
            break;

        for(i=1;i<=1000 && i<=p;i++)
        {
            l.push_back(i);
        }
        printf("Case %ld:\n",cas++);
        for(loop=0; loop<c; loop++)
        {
            getchar();
            scanf("%c",&ch);
            if(ch=='N')
            {
                n=l.front();
                printf("%ld\n",n);
                l.pop_front();
                l.push_back(n);
            }
            else if(ch=='E')
            {
                scanf("%ld",&n);
                l.remove(n);
                l.push_front(n);
            }
        }
        l.clear();
    }
    return 0;
}

