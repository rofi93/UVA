#include<stdio.h>
int main()
{
    int t1,t2,f,a,ct1,ct2,ct3,i,r,t,ct_av;
    while(scanf("%d",&t)!=EOF){

        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
            if(ct1==ct2 && ct2==ct3)
                ct_av=(ct1+ct2)/2;
            else if(ct1==ct2 && ct3>ct1)
                ct_av=(ct3+ct1)/2;
            else if(ct1==ct2 && ct3<ct1)
                ct_av=(ct1+ct2)/2;
            else if(ct1==ct3 && ct2>ct1)
                ct_av=(ct2+ct1)/2;
            else if(ct1==ct3 && ct2<ct1)
                ct_av=(ct1+ct3)/2;
            else if(ct2==ct3 && ct1>ct2)
                ct_av=(ct1+ct2)/2;
            else if(ct2==ct3 && ct1<ct2)
                ct_av=(ct2+ct3)/2;
            else if(ct1<ct2 && ct1<ct3)
                ct_av=(ct2+ct3)/2;
            else if(ct2<ct1 && ct2<ct3)
                ct_av=(ct1+ct3)/2;
            else if(ct3<ct1 && ct3<ct2)
                ct_av=(ct1+ct2)/2;

            r=t1+t2+f+a+ct_av;

            if(r>=90)
                printf("Case %d: A\n",i);
            else if(r>=80 && r<90)
                printf("Case %d: B\n",i);
            else if(r>=70 && r<80)
                printf("Case %d: C\n",i);
            else if(r>=60 && r<70)
                printf("Case %d: D\n",i);
            else if(r<60)
                printf("Case %d: F\n",i);
        }
    }
    return 0;
}
