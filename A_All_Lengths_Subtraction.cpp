#include <iostream>
#include <vector>
#include <numeric>

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> p(n);
    std::vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> p[i];
        pos[p[i]] = i;
    }

    int left = pos[n];
    int right = pos[n];

    bool is_contiguous_mountain = true;

    for (int val_to_find = n - 1; val_to_find >= 1; --val_to_find)
    {
        int current_pos = pos[val_to_find];

        if (current_pos == left - 1)
        {
            left--;
        }
        else if (current_pos == right + 1)
        {
            right++;
        }
        else
        {
            is_contiguous_mountain = false;
            break;
        }
    }

    if (is_contiguous_mountain)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
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