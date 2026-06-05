// Question Number : 2230B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = (int)s.size();
    vector<int> pref2(n+1, 0);
    for (int i = 0; i < n; i++){
        pref2[i+1] = pref2[i] + (s[i] == '2');
    }

    vector<int> suf13(n+1, 0);
    for (int i = n-1; i >= 0; i--){
        suf13[i] = suf13[i+1] + (s[i] == '1' || s[i] == '3');
    }

    int best = 0;
    for (int i = 0; i <= n; i++){
        best = max(best, pref2[i] + suf13[i]);
    }
    cout << n - best << endl;
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n){
        while (n--){
                solve();
            }
        }
    return 0;
}
