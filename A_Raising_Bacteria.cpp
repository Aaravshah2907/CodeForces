// Question Number : 579A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n;
    cin >> n;
    // Convert unsigned long long to binary string
    string binary = bitset<64>(n).to_string();
    // Count the number of '1's in the binary string
    int count = count_if(binary.begin(), binary.end(), [](char c) { return c == '1'; });
    cout << count << endl;
    return 0;
}
