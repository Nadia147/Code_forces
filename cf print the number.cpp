#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a[10000],n;
    vector<int>v;
    set<int>s;
    cin>>n;
    for(i=0;i<n;i++){cin>>l;
    v.push_back(l);}
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(v[j]%v[i]==0){
                v[j]=v[i];
            }
        }
    }
   int t=0;

    /*for(i=0;i<v.size();i++){s.insert(v[i]);}
    cout<<s.size()<<endl;*/
    for(i=1;i<=n;i++){

        k=v[1];
        if(a[k])
            continue;
            t++;
            a[k]=1;

    }
    cout<<t<<endl;
}
