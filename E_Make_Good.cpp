#include <iostream>
#include <string>
#include <vector>

// Function to handle the logic for a single test case
void solve()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    int ans = 0;
    int bal = 0;

    for (char c : s)
    {
        if (c == '(')
        {
            bal++;
        }
        else
        {
            bal--;
            if (bal < 0)
            {
                bal = 0;
                ans++;
            }
        }
    }
    std::cout << ans << "\n";
}

int main()
{
    // Fast I/O for performance
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcases;
    std::cin >> testcases;
    while (testcases--)
    {
        solve();
    }

    return 0;
}