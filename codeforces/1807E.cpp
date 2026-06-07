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

constexpr char nl = '\n';

void solve(){
    int n; cin >> n;
    vpii weights;
    int i = 1;
    for (; i<=n; i++){
        int weight; cin >> weight;
        pii add(weight, i);
        weights.push_back(add);
    }
    if (n == 1) {
        cout << "! 1" << nl;
        cout.flush();
        return;
    }
    if (n == 2) {
        cout << "? 1 1" << nl;
        cout.flush();
        int w; cin >> w;
        if (w != weights[0].first) cout << "! 1";
        else cout << "! 2";
        cout << nl;
        cout.flush();
        return;
    }
    int left = 1, right = (n+1)/2, right_max = n, left_max = 1;
    while (left_max < right_max && (right_max-left_max != 1)){
        cout << "? " << (right - left + 1) << " ";
        ll expected = 0;
        for (int l = left - 1; l<right; l++) {
            cout << weights[l].second << " ";
            expected += weights[l].first;
        }
        cout << nl; cout.flush();
        ll actual; cin >> actual;
        if (actual == expected){
            left = right+1;
            left_max = right+1;
            right = left + (right_max - left)/2;
        } else {
            right_max = right;
            right = left + (right-left)/2;
        }
    } 
    if (left_max == right_max - 1){
        cout << "? " << "1 " << weights[left_max - 1].second << nl;
        cout.flush();
        int w;
        cin >> w;
        if (w != weights[left_max - 1].first)
            cout << "! " << weights[left_max -1].second;
        else
            cout << "! " << weights[right_max - 1].second;
        cout << nl;
        cout.flush();
    }
    else cout << "! " << weights[left - 1].second << nl;
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