// Question Number : 580A

#include <bits/stdc++.h>
using namespace std;


int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    int current = 1, max = 1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n; i++){
        if (a[i] >= a[i-1]){
            current++;
            max = std::max(max, current);
        }
        else{
            current = 1;
        }
    }
    cout << max << endl;
    return 0;
}
