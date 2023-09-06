#include<stdio.h>

int main()
{
    long long int i,j,k,s,a,b,c,tm,ans,fr,sa;
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);

    //for(i=0;i<t;i++){
           {sa=s/c;
            fr=sa/a;
            tm=b*fr;
            ans=sa+tm;}
    printf("%lld\n",ans);}


}

