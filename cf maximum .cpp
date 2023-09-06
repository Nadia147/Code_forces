#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l,m=0,n,a[1000],c=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];


    }
    for(i=0;i<n;i++){if(a[i]==0)m++;}
    if(m==n)cout<<"0\n";
    else
    {for(i=0;i<n;i++){

        if(a[i]==1&&a[i+1]==1){c++;}
        if((a[0]==1&&a[n-1]==1)){k=1;}
    }
    if(c==1&&k==1)
        cout<<"2\n";
    else
        cout<<c<<endl;}

}
