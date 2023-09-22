#include<bits/stdc++.h>
using namespace std;
//int f(int n);

int main()
{
    int n,d,s,t;
    cin>>n;
    for(int i=1;i<=n;i++){
            int a[n],b[n];
        cin>>a[i]>>b[i];

    }
    for(int i=1;i<=n;i++){
        d+=a[i];
    }
     for(int i=1;i<n;i++){
        s+=b[i];
    }

    cout<<d-s<<endl;

}
