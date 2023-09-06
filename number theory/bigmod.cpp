
#include<bits/stdc++.h>
using namespace std;
long long int f(long long int a,long long int b,long long int c){
    if(b==0)return 1;
    if(b%2==0){
       long long int v=f(a,b/2,c);
        return (v*v)%c;
    }
    if(b%2==1) {
               long long int l=a%c;
               long long int m=f(a,b-1,c);
        return (l*m)%c;
    }

}
int main()
{
    int m,n;
    cout<<f(30,3,120000000000);

}
