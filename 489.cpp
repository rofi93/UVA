#include<cstdio>
#include<iostream>
#include<cstring>
#include<list>
#define max 10001
using namespace std;
int main()
{
    int i,j,count,a,n,stroke,pq,k,x,y;
    char ans[max],guess[max];
    while(scanf("%d",&n)!=EOF)
    {
        if(n == -1)
            break;
        cin>>ans>>guess;
        k=strlen(ans);
        list<char>l(&ans[0],&ans[k]);
        printf("Round %d\n",n);
        stroke=x=0;
        k=strlen(guess);
        for(i=0;i<k;i++)
        {
            if(!l.empty())
            {
                x=l.size();
                l.remove(guess[i]);
                if(x==l.size())
                    stroke++;
            }
            else
                break;
        }
        if(l.empty() && stroke<7)
            printf("You win.\n");
        else if(!l.empty() && stroke<7)
            printf("You chickened out.\n");
        else
            printf("You lose.\n");
    }
    return 0;
}
