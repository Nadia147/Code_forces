#include<bits/stdc++.h>
using namespace std;
long int a[1000100];
int main()
{
    vector<int>aa;
    int i,t,j,m,l=0,y=0,k=1;
    cin>>t;
    for(i=0;i<t;i++){cin>>a[i];
    }
    //for(i=0;i<t;i++)
    {sort(a,a+t);}
    for(i=0;i<t;i++){
        if(a[i]>=k){
            k++;
                l++;}
    }
    cout<<l<<endl;
}
