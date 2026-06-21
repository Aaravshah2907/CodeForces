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

int n,m;

template <class T>
bool ckmin(T &a, const T &b){
    return b < a ? a = b, true : false;
}

template <class T>
bool ckmax(T &a, const T &b){
    return a < b ? a = b, true : false;
}

int solve(int a, int b){
    if (a == b) return 0;
    if (a > b)
        return a-b;
    if (b%2 == 1){
        return 1 + solve(a,b+1);
    } else {
        return 1 + solve(a,b/2);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    
    int solution = solve(n,m);
    //if (!(cin >> T)) return 0;
    cout << solution << nl;
    return 0;
}