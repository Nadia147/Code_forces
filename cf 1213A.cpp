#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,n,a[1000],i,v;
    cin>>n;
    for(i=0;i<n;i++){cin>>v;
    //if(i%2==0){c+=1;}
    //else{c+=0;}
    c+=v&1;



    }
    cout<<min(c,n-c)<<endl;

}
