// Question Number : #####

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if ((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's')) {
        cout << "YES" << endl;
    }
    else {
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
