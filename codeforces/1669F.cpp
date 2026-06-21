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
bool ckmax(T &a, const T &b){
    return a < b ? a = b, true : false;
}

void solve(){
    int n; cin >> n;
    vll a(n);
    for (auto &x : a) cin >> x;
    int prev_best = 0, counter = 0, left_index = 0, left_sum = a[left_index], right_index = n-1, right_sum = a[right_index];
    
    if (n == 2){
        if (a[0] == a[1]) cout << "2" << nl;
        else cout << "0" << nl;
        return;
    }
    while(left_index + 1 < right_index){
        if(left_sum < right_sum){
            //counter++;
            left_sum += a[++left_index];
            //cout << "l: " << left_index << " ";
        }
        if(left_sum > right_sum){
            //counter++;
            right_sum += a[--right_index];
            //cout << "r: " << right_index << " ";
            
        }
        if (left_sum == right_sum){
            prev_best = (left_index + 1) + (n - right_index);
            //cout << " '" << prev_best << " '" << " ";
            left_index++;
            left_sum += a[left_index];
        }
    }
    cout << prev_best << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;

    if (!(cin >> T)) return 0;
    while (T--) solve();
    return 0;
}