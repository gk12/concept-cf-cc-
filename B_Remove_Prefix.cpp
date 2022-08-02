#include<bits/stdc++.h>
using namespace std;

#define lli int long long
#define fc first
#define sc second
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define in insert
#define ex "\n"
const int L = 1e9 + 7;

void speedup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// check is prime
bool isPrime(int n)
{
    if (n <= 1)
       { return false;}
    for (int i = 2; i < n; i++)
        {
           if (n % i == 0)
           { return false;}
        }
    return true;  
}

// check is palindrome
bool isPal(string S)
{
   
    for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
           
            return 0;
        }
    }
   
    return 1;
}

// binary power

lli bpow(lli a, lli b) {
    a %= L;
    lli ans = 1;
    while (b > 0) {
        if (b & 1)
            ans = ans * a % L;
        a = a * a % L;
        b >>= 1;
    }
    return ans;
}
void pushparaj()
{
    long long int t;
 cin>>t;

 while(t--)
 {
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    int c=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=n-1;i>=0;i--)
    {
        if(mp[a[i]]>=1)break;
        else {
            mp[a[i]]++;
            c++;
        }
    }
    cout<<n-c<<"\n";
 }

}


int main()
{
    speedup();
    pushparaj();
}
    // lli t;
    // cin>>t;
    // while(t--)
    // {
    //   pushparaj();
    // }
// }
