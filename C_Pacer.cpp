#include <iostream>
#include <vector>
#include <algorithm>

// Use a very small number for -infinity to avoid overflow with long long
const long long INF = -3e18;

void solve()
{
    int n;
    long long m;
    std::cin >> n >> m;

    std::vector<std::pair<long long, int>> reqs(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> reqs[i].first >> reqs[i].second;
    }

    // s0: max score ending at side 0
    // s1: max score ending at side 1
    long long s0 = 0;
    long long s1 = INF;
    long long prev_a = 0;

    for (int i = 0; i < n; ++i)
    {
        long long a = reqs[i].first;
        int b = reqs[i].second;

        long long d = a - prev_a;
        long long s0_cand, s1_cand;

        // Since we always apply a constraint, one of s0 or s1 will be INF
        if (s1 == INF)
        { // Current state is (s0, INF)
            long long x = s0;
            if (d % 2 == 0)
            {
                // To reach side 0: need even runs (max d).
                s0_cand = x + d;
                // To reach side 1: need odd runs (max d-1).
                s1_cand = x + d - 1;
            }
            else
            { // d is odd
                s0_cand = x + d - 1;
                s1_cand = x + d;
            }
        }
        else
        { // Current state is (INF, s1)
            long long y = s1;
            if (d % 2 == 0)
            {
                s0_cand = y + d - 1;
                s1_cand = y + d;
            }
            else
            { // d is odd
                s0_cand = y + d;
                s1_cand = y + d - 1;
            }
        }

        // Apply the requirement at time 'a'
        if (b == 0)
        {
            s0 = s0_cand;
            s1 = INF;
        }
        else
        { // b == 1
            s0 = INF;
            s1 = s1_cand;
        }

        prev_a = a;
    }

    // After the last requirement, run freely for the remaining time
    long long final_score = std::max(s0, s1);
    if (m > prev_a)
    {
        final_score += (m - prev_a);
    }

    std::cout << final_score << std::endl;
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