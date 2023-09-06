#include<bits/stdc++.h>
using namespace std;
bool a[1000];
bool primeofn(int n){
    if(n<=1) return false;
    for(int i=2;i<=n;i++){
        if(n%i==0)
            return false;
        else return true;
    }
}
bool primeofsq(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
        else return true;

}}
bool sett(int n){
    if(n<2)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    return a[n]==false;
}
bool primeoflogn(int n){ int k=n;
sett(n);

    for(int i=3;i*i<=n;i+=2){
        if(a[i]==false){
            for(int j=i*i;j<=n;j+=i+i){
                a[i]=true;
            }
        }
    }

}

int main()
{
    int i,j,k,l,n;
    for(int i=0;i<10;i++){cout<<a[i];}



}
