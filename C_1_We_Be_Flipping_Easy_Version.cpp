// Question Number : 2229C1

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    vector<long long> a(t);
    for (int i = 0; i < t; i++){
        cin >> a[i];
    }

    int parity = 0;
    vector<long long>ans;;
    for(int i = t-1; i >= 0; i--){
        if (parity == 1){
            a[i] = -a[i];
        }
        if (a[i] > 0){
            parity ^= 1;
            ans.push_back(i);
            //cout << "i: " << i << " a[i]: " << a[i] << " parity: " << parity << "\n";
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] + 1 << " ";
    }
    cout << "\n";
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
