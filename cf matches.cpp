
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        if(a==2)cout<<"2\n";
        else if(a%2==0&&a!=2)cout<<"0\n";
        else cout<<"1\n";

    }
}
