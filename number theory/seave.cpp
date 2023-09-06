#include <bits/stdc++.h>
using namespace std;
int n = 1000000000;
vector<int >v;

void SieveOfEratosthenes(int n)
{
   meemset(v,0,v.size());
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
         if (prime[p]==true)
          //cout << p << " ";
          {v.push_back(p);}
}

// Driver Program to test above function
int main()
{
    int j;
    cin>>n;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    for(int i=0;i<10;i++){cout<<v[i]<<"\n";}
    return 0;
}

