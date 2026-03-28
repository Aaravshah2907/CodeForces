#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>

void solve()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    std::vector<int> b(k);
    for (int i = 0; i < k; ++i)
    {
        std::cin >> b[i];
    }

    long long total_cost = 0;
    for (long long price : a)
    {
        total_cost += price;
    }

    std::sort(a.rbegin(), a.rend());
    std::sort(b.begin(), b.end());

    int ptr = -1;

    for (int group_size : b)
    {
        ptr += group_size;
        if (ptr >= n)
        {
            break;
        }
        long long discount = a[ptr];
        total_cost -= discount;
    }
    std::cout << total_cost << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}