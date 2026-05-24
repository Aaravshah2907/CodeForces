//1520D
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    // We use a map to store the frequency of each (a[i] - i) value
    map<int, long long> counts;

    for (int i = 0; i < t; i++)
    {
        int val;
        cin >> val;
        // Key concept: transform the value by subtracting its index
        counts[val - i]++;
    }

    long long total_pairs = 0;

    // Calculate combinations for each unique value found
    for (auto const &[key, freq] : counts)
    {
        if (freq > 1)
        {
            total_pairs += (freq * (freq - 1)) / 2;
        }
    }

    cout << total_pairs << "\n";
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