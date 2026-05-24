#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> a(n), c(n);

        for (auto &x : a)
            cin >> x;
        for (auto &x : c)
            cin >> x;

        vector<ll> b(n), ans(n);

        bool ok = true;

        ll mx = -(1LL << 60);

        for (int i = 0; i < n; i++)
        {

            if (i && c[i] < c[i - 1])
            {
                ok = false;
                break;
            }

            if (s[i] == '1')
            {

                b[i] = (i ? b[i - 1] : 0) + a[i];

                if (max(mx, b[i]) != c[i])
                {
                    ok = false;
                    break;
                }

                ans[i] = a[i];
            }
            else
            {

                b[i] = c[i];

                ans[i] = b[i] - (i ? b[i - 1] : 0);
            }

            mx = max(mx, b[i]);
        }

        if (!ok)
        {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";

        for (auto x : ans)
            cout << x << ' ';

        cout << '\n';
    }
}