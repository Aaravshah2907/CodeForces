#include <iostream>

// This helper function is correct and calculates the "cost" of a number.
int count_ops(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 3;
        count++;
    }
    return count;
}

void solve()
{
    int l, r;
    std::cin >> l >> r;

    // Use long long for the sum to avoid potential overflow, though not strictly
    // necessary with the given constraints, it's good practice.
    long long total_operations = 0;

    // Phase 1: Cost to create the first zero from 'l'.
    total_operations += count_ops(l);

    // Phase 2: The initial total cost of all numbers in the range.
    for (int i = l; i <= r; ++i)
    {
        total_operations += count_ops(i);
    }

    std::cout << total_operations << std::endl;
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