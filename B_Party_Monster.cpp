// Question Number : 2227B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int counter_open = 0;
    for (int i = 0; i < n; i++){
        char c;
        cin >> c;
        if (c == '('){
            counter_open++;
        } else {
            counter_open--;
        }
    }
    if (counter_open == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
