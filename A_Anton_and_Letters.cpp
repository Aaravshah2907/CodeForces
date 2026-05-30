// Question Number : 443A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<char> letters;
    char c;
    cin >> c;
    while (c != '}') {
        if (isalpha(c)) {
            letters.insert(c);
        }
        cin >> c;
    }       
    cout << letters.size() << endl;
    return 0;

}
