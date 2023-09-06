
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1000];
	cin>>n;
	if(n%2==0)
		cout<<"NO"<<endl;
	else
	{

		for(int i=1;i<=n;i++)
			cout<<i*2-(i%2)<<" ";
		for(int i=1;i<=n;i++)
			cout<<2*i - ((i-1)%2)<<" ";
	}
	cout<<"YES"<<endl;
	return 0;
}
