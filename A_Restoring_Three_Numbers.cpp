// Question Number : 1154A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
    return 0;
}
