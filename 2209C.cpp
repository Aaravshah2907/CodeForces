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
    int n; cin >> n;
    //cout << "~ " << n << nl;
    int ans = -1;
    for (int i = 1; i < 3; i++){
        cout << "? " << i << " " << i + 1 << nl;
        cout.flush();
        int res;
        cin >> res;
        if (res) {
            ans = i;
            break;
        }
        if (i == 2){
            cout << "? 1 3" << nl;
            cout.flush();
            int res;
            cin >> res;
            if (res){
                ans = 1;
                break;
            }
        }
    }
    if (ans < 0){
        for (int i = 4; i < 2*n; i+=2){
            cout << "? " << i << " " << i + 1 << nl;
            cout.flush();
            int res; cin >> res;
            if (res)
            {
                ans = i;
                break;
            }
        }
    }
    if (ans == -1){
        //cout << "~ "<< n << nl;
        ans = 2*n;
    }
    cout << "! " << ans << nl;
    cout.flush();
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