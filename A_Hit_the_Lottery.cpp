// Question Number : 996A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n, counter = 0;
    cin >> n;
    counter += n / 100;
    n %= 100;
    counter += n / 20;
    n %= 20;
    counter += n / 10;
    n %= 10;
    counter += n / 5;
    n %= 5;
    counter += n / 1;
    cout << counter << "\n";
    return 0;
}
