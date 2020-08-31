#include <bits/stdc++.h>  // modifying on 18th Nov,2019 10:34am
using namespace std;

#define max_size 1000005
#define pb push_back
#define mp make_pair
#define ft first

#define sd second
#define ll long long int
#define inf 1000000007
#define ll_max 1e18

#define bitcount(a) __builtin_popcountll(a)   // count set bits
#define lzcount(x) __builtin_clz(x)        // count leading zeros in binary representation of number
#define tzcount(x) __builtin_ctz(x)        // count trailing zeros in binary representation of number
#define digit(n) floor(log10(n)+1)
#define UNIQUE(v) do { sort((v).begin(), (v).end()); (v).erase(unique((v).begin(), (v).end()), (v).end()); } while (false)
#define f1(i,n) for(ll i=0;i<n;++i)
#define f2(i,k,n) for(int i=k;i<n;++i)

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 1ll<<30;
const ll LINF = 1ll<<60;

bool isprime(ll a){ if(a==2) {return 1;}if(!(a&1) ) {return 0;}for(ll i=3;i*i<=a;i+=2){if(a%i==0) {return 0;} } return 1;}

bool isPerfectSquare(long double x) { long double sr = sqrt(x);
     return ((sr - floor(sr)) == 0); }

bool comp( pll a, pll b)
{
    if(a.sd < b.sd)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      if(n&1 == 0)cout<<n/2<<" "<<n/2<<endl; // EVEN
      if(isprime(n))cout<<1<<" "<<n-1<<endl; // PRIME
    string s = "understanding the workflow of the git";
    string s1 = "moving inside the staging area."
    string s2 = "writing something to the dev branch";
    }

}
