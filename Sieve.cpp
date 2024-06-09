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
void sieve(ll slv) {  // faster sieve for only primes .
    memo(slvarr, 0);
    slvarr[0] = slvarr[1] = 1;
    for (ll i = 4; i <= slv; i += 2) slvarr[i] = 1;
    for (ll i = 3; i * i <= slv; i += 2) {
        if (!slvarr[i]) 
        for (ll j = i * i; j <= slv; j += 2 * i) 
        slvarr[j] = 1;
        }
}


//vector<ll>primes;
void sieve(ll slv) {   // fast sieve for only primes .
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



ll slvarr[100005];   //  normal sieve for many use
void sieve(ll slv)
{
for (int i=2;i<=slv;i++){ 
if(slvarr[i]==0)
for (int j=i*i;j<=slv;j+=i)slvarr[j]=1;}
}



const int N = 10000000;    // Linear Sieve (Pr for prime and lp for least prime facto)
vector<int> lp(N+1);
vector<int> pr;
for (int i=2; i <= N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back(i);
    }
    for (int j = 0; i * pr[j] <= N; ++j) {
        lp[i * pr[j]] = pr[j];
        if (pr[j] == lp[i]) {
            break;
        }
    }
}




vector<bool>slvarr;     /// part 01  segmentedSieve
ll siv_H=0;
void sieve(ll slv) {
    if (siv_H>slv) return;
    siv_H=slv;
    slvarr.assign(slv + 1, false);
    slvarr[0] = slvarr[1] = 1;
    for (ll i = 4; i <= slv; i += 2) slvarr[i] = 1;
    for (ll i = 3; i * i <= slv; i += 2) {
        if (!slvarr[i]) 
        for (ll j = i * i; j <= slv; j += 2 * i) 
        slvarr[j] = 1;
        }
}
void segmentedSieve(ll a, ll b) {    ////  part 2   segmentedSieve
    ll limit = sqrt(b) + 1;
    vector <bool>siv_a_b(b-a+1,1);
    sieve(limit);
    for(ll i=2;i<limit;i++)
    if (!slvarr[i])
    for (ll j = i * i; j <= b; j += i) 
    if (j>=a)
    siv_a_b[j-a]=0;

    if (a == 1) siv_a_b[0] = false;

    for (ll i=0;i<siv_a_b.size();i++)
    if (siv_a_b[i]) cout <<i+a<<endl;

    
}



int main ()
{
ios_base::sync_with_stdio(0);cin.tie(0);

}
