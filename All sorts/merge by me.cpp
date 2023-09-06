#include<stdio.h>
int arr[100];
int f1(int arr[],int l,int m,int h)
{
    int arr1[10],arr2[10];
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=h-m;
    for(i=0; i <  n1; i++)
    {
        arr1[i]=arr[l+i];
    }
    for(j=0; j < n2; j++)
    {
        arr2[j]=arr[m+j+1];
    }
    arr1[i]=9999;
    arr2[j]=9999;
    i=0;
    j=0;
    for(k=l; k <=h; k++)
    {
        if(arr1[i]<=arr2[j])
            arr[k]=arr1[i++];
        else
            arr[k]=arr2[j++];
    }


}
int f2(int arr[],int hi,int low)
{
    int mid;
    if(low<hi)
    {
        mid=(low+hi)/2;
        f2(arr,mid,low);
        f2(arr,hi,mid+1);
        f1(arr,low,mid,hi);
    }

}
int main()
{
    int n,i,j,k,b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    //f1()
    f2(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
