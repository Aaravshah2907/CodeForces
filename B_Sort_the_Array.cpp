// Question Number : 451B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<unsigned long long> a(n);
    for (auto &x : a)
        cin >> x;

    int l = 0, r = 0;

    // 1. Find the first element that decreases
    for (int i = 0; i < n - 1; i++){
        if (a[i] > a[i + 1]){
            l = i;
            break;
        }
    }

    // 2. Find the last element that decreases (from the back)
    for (int i = n - 1; i > 0; i--){
        if (a[i] < a[i - 1]){
            r = i;
            break;
        }
    }

    // 3. Reverse the identified segment
    reverse(a.begin() + l, a.begin() + r + 1);

    // 4. Verify if the entire array is now sorted
    if (is_sorted(a.begin(), a.end())){
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    }
    else{
        cout << "no\n";
    }
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
