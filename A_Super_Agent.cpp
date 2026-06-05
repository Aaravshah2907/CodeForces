// Question Number : 12A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> a(3, vector<int>(3));
    char ch;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> ch;
            if (ch == 'X'){
                a[i][j] = 1;
            } else if (ch == 'O'){
                a[i][j] = -1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    bool symm = true;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j] != a[2-i][2-j]){
                //cout << "a[" << i << "][" << j << "] = " << a[i][j] << " a[" << 2-i << "][" << 2-j << "] = " << a[2-i][2-j] << endl;
                symm = false;
                break;
            }
        }
    }
    if (symm){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
