// Question Number : 2229B

#include <bits/stdc++.h>
using namespace std;

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

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long sumMax = 0;
        long long bestMin = 0;

        for (int i = 0; i < n; i++)
        {
            sumMax += max(a[i], b[i]);
            bestMin = max(bestMin, min(a[i], b[i]));
        }

        cout << sumMax + bestMin << '\n';
    }

    return 0;
}