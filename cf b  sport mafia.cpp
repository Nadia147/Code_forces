#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main()
{
    int n,k,l=0,i=1,j,f=0,sum=0,c=0;
    for(i=0;i<1000000;i++){a[i]=-2;}
    cin>>n>>k;
    if(k==0)cout<<n/2+1<<endl;
    else

{for(i=5;i<1000000;i++){
    a[0]=1;
    a[1]=2;
    a[2]=-1;
    a[3]=-1;
    if(i%2==0){a[i]=-1;}

}
i=1;
for(i=1;i<=n;i++){
    if(a[i]==-2){
        a[i]=i;
        //l=i;
    }
    else{
        i=i+1;
    }
    sum+=a[i];


    //if(sum==k)
    //{break;}

}
for(i=0;i<n;i++){
    if(a[i]==-1){c++;}
    //cout<<"a="<<a[i]<<endl;
}
cout<<c<<endl;}

}
