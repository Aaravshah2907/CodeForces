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
    string s; cin >> s;
    ll w = 0, o= 0, counter= 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'o') o+=w;
        else if (i > 0 && s[i-1] == 'v'){
            w++;
            counter += o;
        }
    }
    cout << counter << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    while (T--)
        solve();

    return 0;
}