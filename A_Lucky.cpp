// Question Number : 1676A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int odd = 0, even = 0;
    // index wise iteration of string
    for (int i = 0; i < s.length(); i++){
        //cout << "i: " << i << " s[i]: " << s[i] << " odd: " << odd << " even: " << even << endl;
        if (i<3){
            odd += s[i] - 48;
        } else {
            even += s[i] - 48;
        }
    }
    if (odd == even){
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
