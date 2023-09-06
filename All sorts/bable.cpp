#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],t,m,i,k=0,j,n;
    scanf("%d",&t);
    n=t;
    for(i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
        for(i=0;i<t;i++){
            for(j=i+1;j<=n;j++){
                if(a[i]>a[j]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
                }}

         for(i=0;i<t;i++)
            {printf("%d ",a[i]);}


        }

