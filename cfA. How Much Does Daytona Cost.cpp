
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
   cin>>t;
   while(t--){


    int n,m,i,j,k,x,y=0,z,a[10000],h;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x;
        if(m==x){
            y=1;
        }
    }
    if(y==1)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}
}


