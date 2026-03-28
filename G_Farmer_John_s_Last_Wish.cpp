#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

const int MAXA = 200005;
std::vector<int> divisors[MAXA];
int count[MAXA];
int freq_of_counts[MAXA];
std::vector<int> seg_tree;
int N_segtree;

// Precompute all divisors up to MAXA
void precompute_divisors()
{
    for (int i = 1; i < MAXA; ++i)
    {
        for (int j = i; j < MAXA; j += i)
        {
            divisors[j].push_back(i);
        }
    }
}

// Standard segment tree for range maximum query
void build_segtree(int n)
{
    N_segtree = n + 1;
    seg_tree.assign(2 * N_segtree, 0);
}

void update_segtree(int p, int value)
{
    for (seg_tree[p += N_segtree] = value; p > 1; p >>= 1)
    {
        seg_tree[p >> 1] = std::max(seg_tree[p], seg_tree[p ^ 1]);
    }
}

int query_segtree(int l, int r)
{ // max on interval [l, r)
    int res = 0;
    for (l += N_segtree, r += N_segtree; l < r; l >>= 1, r >>= 1)
    {
        if (l & 1)
            res = std::max(res, seg_tree[l++]);
        if (r & 1)
            res = std::max(res, seg_tree[--r]);
    }
    return res;
}

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<int> modified_g;
    std::vector<int> modified_c;

    build_segtree(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];

        for (int d : divisors[a[i]])
        {
            if (d == 1)
                continue;

            int old_c = count[d];
            if (old_c > 0)
            {
                freq_of_counts[old_c]--;
                if (freq_of_counts[old_c] == 0)
                {
                    update_segtree(old_c, 0);
                }
                modified_c.push_back(old_c);
            }

            count[d]++;
            modified_g.push_back(d);
            int new_c = count[d];

            if (freq_of_counts[new_c] == 0)
            {
                update_segtree(new_c, new_c);
            }
            freq_of_counts[new_c]++;
            modified_c.push_back(new_c);
        }

        // For a prefix of length i+1, max k is i.
        // We query for max count k < i+1.
        std::cout << query_segtree(0, i + 1) << " ";
    }
    std::cout << "\n";

    // Reset global arrays for the next test case
    for (int g : modified_g)
        count[g] = 0;
    for (int c : modified_c)
        freq_of_counts[c] = 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    precompute_divisors();
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}