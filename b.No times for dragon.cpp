#include<bits/stdc++.h>
using namespace std;
//int f(int n);

int main()
{
   long int n,d=0,s=0,t;
    //int a[n],b[n];
    cin>>n;
   long int a[n],b[n];
    for(int i=1;i<=n;i++){

        cin>>a[i]>>b[i];

    }
   long int m = sizeof(a) / sizeof(a[0]);
    sort(a,a+m,greater<int>());
   long int r= sizeof(b) / sizeof(b[0]);
    sort(b,b+r,greater<int>());
    for(int i=1;i<=n;i++){
        d+=a[i];
    }
     for(int i=1;i<n;i++){
        s+=b[i];
    }

    cout<<d-s<<endl;

}

