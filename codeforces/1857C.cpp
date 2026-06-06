// Question Number : 1857C

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    int size = t*(t-1)/2;
    vector<long long> v(size);
    for (int i = 0; i < size; i++)    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<long long> ans;
    int index = 0;
    for (int i = 0; i < t-1; i++)    {
        ans.push_back(v[index]);
        index += (t-1-i);
    }
    ans.push_back(1000000000LL);
    for (int i = 0; i < t; i++)    {
        if (i) cout << " ";
        cout << ans[i];
    }
    cout << "\n";
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
