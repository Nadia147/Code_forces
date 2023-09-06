#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[10000];
    int b[1000],i,j,k,t;
    multimap<int,string>m;
        multimap<int,string>::iterator ii,jj;

    cin>>t;
    for(i=0;i<t;i++){cin>>a[i]>>b[i];}
    for(i=0;i<t;i++){m.insert(make_pair(b[i],a[i]));
    }
    for(ii=m.begin();ii!=end();ii++){

    }
if(!m.empty())cout<<(--m.end())->second;

}
