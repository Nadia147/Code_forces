
#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
   cin>>t;
   while(t--){


    int n,m,i,j,k,x=0,y,z,a[10000],h,b[1000],c[111],bb[10000],cc=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    for (int i=1;i<=n;i++){
        if(a[i]<=10){
            c[i]=a[i];
            bb[i]=b[i];

        }
        else{
            c[i]=0;
            bb[i]=0;
        }
        //cout<<bb[i]<<endl;

    }
    for(int i=1;i<=n;i++){

            x=max(bb[i],x);


    }
    //cout<<"x"<<x<<endl;
    for(int i=1;i<=n;i++){
        if(x==bb[i])
            cc=i;
    }

    cout<<cc<<endl;}
}

