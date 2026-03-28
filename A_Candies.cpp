#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long n_dup = n;
    long long sum = 3;
    while (n){
        if (n % sum == 0){
            cout << n/sum << endl;
            return;
        }
        sum = (sum+1)*2 -1;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
