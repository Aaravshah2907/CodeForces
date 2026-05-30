// Question Number : 478B

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;
    long long k_max = (n-m+1)*(n-m)/2;
    long long q = n/m;
    long long r = n%m;
    long long k = (m-r)*q*(q-1)/2 + r*q*(q+1)/2;
    cout << k << " " << k_max << "\n";
    return 0;
}
