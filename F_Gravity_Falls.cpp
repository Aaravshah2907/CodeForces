#include <bits/stdc++.h>

std::vector<int> arrays[200005];
int n;

void solve()
{
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int k;
        std::cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; ++j)
        {
            std::cin >> arrays[i][j];
        }
    }

    std::vector<int> bottom_row;
    std::vector<int> unused_indices;
    for (int i = 1; i <= n; ++i)
    {
        unused_indices.push_back(i);
    }

    while (!unused_indices.empty())
    {
        int current_col = bottom_row.size();

        std::vector<int> candidates;
        for (int idx : unused_indices)
        {
            if (arrays[idx].size() > current_col)
            {
                candidates.push_back(idx);
            }
        }

        if (candidates.empty())
        {
            break;
        }

        int tie_breaker_col = current_col;
        while (candidates.size() > 1)
        {
            bool some_ended = false;
            int min_len = -1;
            for (int idx : candidates)
            {
                if (min_len == -1 || arrays[idx].size() < min_len)
                {
                    min_len = arrays[idx].size();
                }
            }

            if (min_len == tie_breaker_col)
            {
                std::vector<int> final_candidates;
                for (int idx : candidates)
                {
                    if (arrays[idx].size() == min_len)
                    {
                        final_candidates.push_back(idx);
                    }
                }
                candidates = final_candidates;
                break;
            }

            std::map<int, std::vector<int>> groups;
            for (int idx : candidates)
            {
                groups[arrays[idx][tie_breaker_col]].push_back(idx);
            }

            candidates = groups.begin()->second;
            tie_breaker_col++;
        }

        int best_idx = candidates[0];
        
        for (size_t j = current_col; j < arrays[best_idx].size(); ++j)
        {
            bottom_row.push_back(arrays[best_idx][j]);
        }

        std::vector<int> next_unused;
        for (int idx : unused_indices)
        {
            if (idx != best_idx)
            {
                next_unused.push_back(idx);
            }
        }
        unused_indices = next_unused;
    }

    for (size_t i = 0; i < bottom_row.size(); ++i)
    {
        std::cout << bottom_row[i] << (i == bottom_row.size() - 1 ? "" : " ");
    }
    std::cout << "\n";
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