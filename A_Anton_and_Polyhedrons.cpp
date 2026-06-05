// Question Number : 785A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<string, int> freq;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        freq[s]++;
    }
    int ans = 0;
    for (auto& [s, f] : freq){
        if (s == "Tetrahedron"){
            ans += 4 * f;
        }
        else if (s == "Cube"){
            ans += 6 * f;
        }
        else if (s == "Octahedron"){
            ans += 8 * f;
        }
        else if (s == "Dodecahedron"){
            ans += 12 * f;
        }
        else if (s == "Icosahedron"){
            ans += 20 * f;
        }
    }
    cout << ans << endl;
    
    return 0;
}
