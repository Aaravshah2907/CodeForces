// Question Number : 1857A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    vector<int> a(t);
    int odd = 0, even = 0;
    for (int i = 0; i < t; i++){
        cin >> a[i];
        if (a[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    bool even_even = even % 2 == 0;
    bool odd_even = odd % 2 == 0;
    if (odd_even){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

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
