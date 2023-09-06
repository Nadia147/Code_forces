#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int>v;
    int i,j,k,n,l,f=0,z,mm,kk=0;
    cin>>n>>z;
    for(i=0;i<n;i++){

        cin>>l;
        kk=0;
        for(j=0;j<l;j++){

            cin>>k;
            if(k<z)
                kk=1;
            }
            if(kk==1)
                {v.push_back(i+1);}

        }

    mm=v.size();
    {   cout<<mm<<endl;
        for(i=0;i<v.size();i++){cout<<v[i]<<" ";}
    cout<<"\n";}
}
