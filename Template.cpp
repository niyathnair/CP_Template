#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <cctype> 
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define REP(i, n) for (long long i = 0; i < n; ++i)
#define LREP(i, n) for (long long i = 0; i < n-1; ++i)
#define RREP(i, n) for (long long i = (n) - 1; i >= 0; --i)
#define REP1(i, n) for (long long i = 1; i <= n; ++i)
#define PB push_back
#define ll long long
const int INF = 2e9 + 10;
const ll mod = 1000000007;
const ll INFll = 1e18 + 10;

/**
        auto compare=[](string &a,string&b){
            if(a.size()==b.size()) return a<b;
            return a.size()<b.size();
        };
        
        priority_queue<string,vector<string>,decltype(compare)> pq(compare);
**/
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


void solve() {
    
}

signed main() {
    FAST_IO;
    int TC=1;
    cin >> TC;
    while (TC--) solve();
    return 0;
}
