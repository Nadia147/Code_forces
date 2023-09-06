#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string a,b;
    cin>>t;
    for(int i=0;i<t;i++){
            n=0;
        cin>>a>>b;
        for(int j=0;j<a.size();j++){
            for(int k=0;k<b.size();k++){
                if(a[j]==b[k]){
                    n++;
                }
            }
        }
        //cout<<"n="<<n<<endl;
    if(n)cout<<"YES\n";
    else cout<<"NO\n";
    }
}
