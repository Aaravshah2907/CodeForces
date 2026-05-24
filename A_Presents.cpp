// Question Number : 136A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> presents(n), friends(n);
    for (int i = 0; i < n; i++){
        cin >> presents[i];
    }
    for (int i = 0; i < n; i++){
        friends[presents[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++){
        cout << friends[i] << " ";
    }
    cout << endl;
}

int main()
    {
        // Fast I/O
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        solve();
        return 0;
    }
