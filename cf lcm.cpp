#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n;
    cin>>n;
    if(n==1){l=1;}
    else if(n==2){l=2;}
    else if(n==3){l=6;}
    else if(n%2==0){
        if(n%3==0){l=(n-1)*(n-2)*(n-3);}
        else l=n*(n-1)*(n-3);
    }
    else{
        l=n*(n-1)*(n-2);
    }
    cout<<l<<endl;
}
