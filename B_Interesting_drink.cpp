// Question Number : 706B

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int count = 0;
    int q = 0;
    cin >> q;
    while (q--){
        int x;
        cin >> x;
        int idx = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << idx << "\n";
    }
    return 0;
}
