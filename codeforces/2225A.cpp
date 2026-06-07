// Question Number : #####

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long x , y;
    cin >> x >> y;
    unsigned long long factor_max = y/x;
    bool ans = false;
    for (unsigned long long i = 1; i <= factor_max; i++){
        if (y % (x*i) != 0){
            ans = true;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << "\n";
}

int main()
    {
        // Fast I/O
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        if (cin >> n)
        {
            while (n--)
            {
                solve();
            }
        }

        return 0;
    }
