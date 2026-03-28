#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    while (n>1){
        if (n % 2 == 1){
            cout << "YES" << endl;
            return;
        }
        n= n/2;
    }
    cout << "NO" << endl;
}


int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
