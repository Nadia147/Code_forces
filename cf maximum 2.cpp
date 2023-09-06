#include<bits/stdc++.h>
using namespace std;
//vector<long long int >a;
int main()
{
   long long  int i,j,k=0,l=0,m=0,n,c=1,sum=0,tt;
    cin>>n;
    long long int a[n*2];
    for(i=0;i<n;i++){
        cin>>a[i];
        //a.push_back(tt);
        a[i+n]=a[i];


    }
    for(i=0;i<2*n;i++){
        if(a[i]==1){sum+=1;}
        else{sum=0;}
        l=max(sum,l);
    }


 cout<<l<<endl;
}
