#include<bits/stdc++.h>
using namespace std;
int a[100005],n;
string s[1000];
vector <int>v;
 //string s=" ";
const int sz = 1e5;
bool isPrime[sz + 1];
void sieve()
{
    memset(isPrime, true, sizeof(isPrime));

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= sz; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < sz; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void f(int d)
{

    int left = pow(10, d - 1);
    int right = pow(10, d) - 1;

   int k=0;
    for (int i = left; i <= right; i++) {
        if (isPrime[i]) {
                v.push_back(i);
       }}
    int ll=0,cf=0,mod=0;
    for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();


}
int main()
{
    int t,i;
    sieve();
    cin>>t;
    while(t--){
    //int n;
    cin>>n;



    f(n);//it will return all the prime number of giver length of n;




}
}
