#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr char nl = '\n';

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

template <class T>
bool ckmin(T &a, const T &b){
    return b < a ? a = b, true : false;
}

template <class T>
bool ckmax(T &a, const T &b)
{
    return a < b ? a = b, true : false;
}

void solve(){
    int n,k; cin >> n >> k;
    vector<char> s(n);
    for(auto &x : s) cin >> x;
    for (int i = 0; i < n-k; i++){
        if (s[i] == '1'){
            s[i] = '0';
            s[i+k] = ((s[i+k] == '0')?'1' : '0');
        }
    }
    int ones = 0;
    for(auto x : s){
        if (x == '1') ones = 1;
    }
    if (ones) cout << "NO" << nl; 
    else cout << "YES" << nl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--)
        solve();

    return 0;
}