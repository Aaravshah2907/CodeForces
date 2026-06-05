// Question Number : 2232A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    vector<unsigned long long> a(t);
    for (int i = 0; i < t; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    unsigned long long less = 0, more = 0;
    for (int i = 0; i < t; i++){
        if (a[i] < a[t/2]){
            less++;
        }
        else if (a[i] > a[t/2]){
            more++;
        }
    }
    cout << max(less, more) << "\n";
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
