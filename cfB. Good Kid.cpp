#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){int n,x=1;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];}
sort(a,a+n);
a[0]=a[0]+1;
for(int i=0;i<n;i++){
    x=x*a[i];
    //cout<<a[i]<<" ";
}
cout<<x<<endl;
}
}


