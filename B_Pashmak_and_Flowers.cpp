// Question Number : 459B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int min, max, min_c, max_c;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0){
            min = max = a[i];
            min_c = max_c = 1;
        } else {
            if (a[i] < min){
                min = a[i];
                min_c = 1;
            } else if (a[i] == min){
                min_c++;
            }
            if (a[i] > max){
                max = a[i];
                max_c = 1;
            } else if (a[i] == max){
                max_c++;
            }
        }
    }
    if (min == max){
        cout << 0 << " " << (long long) n * (n - 1) / 2 << "\n";
    } else {
        cout << max - min << " " << (long long) min_c * max_c << "\n";
    }
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
