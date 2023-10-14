
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
   cin>>t;
   while(t--){


    int n,m,i,j,k,x,y,z=10000000,a[10000],h;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k>>x;
        z=min(z,(k+(x-1)/2));
    }
    cout<<z<<endl;
   }
}


