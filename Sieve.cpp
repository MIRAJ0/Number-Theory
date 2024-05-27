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


bool slvarr[100000008];
vector<ll>primes;
void sieve(ll slv) {
    memo(slvarr,0);
    for (ll i = 2; i * i <slv; i++) {
    if (!slvarr[i]) 
    for (ll j = i * i; j < slv; j += i)
    slvarr[j] = 1;
    }
    for (ll i=2;i<slv;i++)
    if (!slvarr[i])
    primes.push_back(i);
}

int main ()
{
ios_base::sync_with_stdio(0);cin.tie(0);
const ll lim=1e8;
sieve(lim);
for (ll i=0;i<primes.size();i+=100)
cout <<primes[i]<<endl;
}
