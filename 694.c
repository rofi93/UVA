#include<stdio.h>
#include<math.h>
int main()
{
    long long int A,L,a,l,i,j,n;
    for(i=1;;i++)
    {
        scanf("%lld %lld",&a,&l);
        if(a<0 && l<0)
            break;
        A=a;
        L=l;
        n=1;
        for(j=0;;j++)
        {
            if(A==1)
                break;
            if(A%2==0)
            {
                A=A/2;
                if(A>L)
                    break;
                n++;
            }
            else if(A%2!=0)
            {
                A=(3*A)+1;
                if(A>L)
                    break;
                n++;
            }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,a,l,n);
    }
    return 0;
}
