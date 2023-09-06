#include<stdio.h>
int main()
{
    int a[1000],i,j,k=0,l,n,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
            k=i;
    while(k>0&&a[k-1]>a[k]){
        t=a[k];
       a[k]=a[k-1];
       a[k-1]=t;
       k--;

       }}
    for(i=0;i<=n-1;i++)
        printf("%d ",a[i]);
    return 0;
}
