// Question Number : 456A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    // Sort a but keep b in the order of sort of a
    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; i++){
        ab[i] = {a[i], b[i]};
    }
    sort(ab.begin(), ab.end());
    // check if b is non decreasing
    for (int i = 1; i < n; i++){
        if (ab[i].second < ab[i-1].second){
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
    return 0;
}
