#include <iostream>
#include <vector>
#include <numeric>

void solve()
{
    int n;
    long long k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    std::vector<int> total_counts(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
        total_counts[a[i]]++;
    }

    // Step 1: Preprocessing - Check divisibility and calculate targets
    std::vector<int> target_counts(n + 1, 0);
    bool possible = true;
    for (int i = 1; i <= n; ++i)
    {
        if (total_counts[i] % k != 0)
        {
            possible = false;
            break;
        }
        target_counts[i] = total_counts[i] / k;
    }

    if (!possible)
    {
        std::cout << 0 << std::endl;
        return;
    }

    // Step 2: Sliding Window to count awesome subarrays
    long long awesome_count = 0;
    int r = 0;
    std::vector<int> window_counts(n + 1, 0);

    // Iterate with the left pointer
    for (int l = 0; l < n; ++l)
    {
        // Expand the window with the right pointer
        while (r < n)
        {
            int current_val = a[r];
            // Check if adding the new element is valid
            if (window_counts[current_val] < target_counts[current_val])
            {
                window_counts[current_val]++;
                r++;
            }
            else
            {
                // Window would become invalid, so stop expanding
                break;
            }
        }

        // For the current `l`, all subarrays ending from `l` to `r-1` are valid.
        // The number of such subarrays is `r - l`.
        awesome_count += (r - l);

        // Shrink the window from the left for the next iteration
        window_counts[a[l]]--;
    }

    std::cout << awesome_count << std::endl;
}

int main()
{
    // Fast I/O
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