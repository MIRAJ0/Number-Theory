#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <cmath> 
#include <string>
#include <map> 
#include <set> 
#include <queue>  
#include <stack>  
#include <cstdio>
#include <cstdlib>  
#include <climits> 
#include <cstring>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define endl "\n"
using namespace std;


#define memo(a,b) memset(a,b,sizeof(a))


bool slvarr[100000008];  // fast sieve for only primes .
//vector<ll>primes;
void sieve(ll slv) {
    memo(slvarr,0);
    for (ll i = 2; i * i <=slv; i++) {
    if (!slvarr[i]) 
    for (ll j = i * i; j <=slv; j += i)
    slvarr[j] = 1;
    }
    // for (ll i=2;i<=slv;i++)
    // if (!slvarr[i])
    // primes.push_back(i);
}

void sieve(ll slv) {  // faster sieve
    memo(slvarr, 0);
    slvarr[0] = slvarr[1] = 1;
    for (ll i = 4; i <= slv; i += 2) slvarr[i] = 1;
    for (ll i = 3; i * i <= slv; i += 2) {
        if (!slvarr[i]) 
        for (ll j = i * i; j <= slv; j += 2 * i) 
        slvarr[j] = 1;
        }
}


ll slvarr[100005];   //  normal sieve for many use
void sieve(ll slv)
{
for (int i=2;i<=slv;i++){ 
if(slvarr[i]==0)
for (int j=i+i;j<=slv;j+=i)slvarr[j]=1;}
}



int main ()
{
ios_base::sync_with_stdio(0);cin.tie(0);
const ll lim=1e8;
sieve(lim);
for (ll i=0;i<primes.size();i+=100)
cout <<primes[i]<<endl;
}
