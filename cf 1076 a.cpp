#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a[1000],n;
    string s,ss;
    cin>>n;
    cin>>s;
    ss=s;
    for(i=0;i<s.size()-1;i++)
    {
        if(s[i]>s[i+1]){
            ss= s.substr(0, i) + s.substr(i + 1);
            break;
        }
    }
  //cout<<ss<<endl;
  if (ss==s) {
    ss=ss.substr(0, n - 1);
  }
  cout << ss <<endl;
  return 0;
}
