// Question Number : 1372B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    // Find the smallest divisor greater than 1
    int smallest_divisor = n;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            smallest_divisor = i;
            break; // The first one we find is the smallest
        }
    }

    // g is the largest proper divisor of n
    int g = n / smallest_divisor;

    // a and b are formed using the largest possible GCD
    int a = g;
    int b = n - g;

    cout << a << " " << b << "\n";
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
