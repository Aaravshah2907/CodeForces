#include <iostream>

void solve()
{
    int a, x, y, min_xy, max_xy, mid_xy;
    std::cin >> a >> x >> y;
    min_xy = (x < y)? x : y;
    max_xy = (x > y) ? x : y;
    if (min_xy < a && max_xy > a){
        std::cout << "NO" << std::endl;
        return;
    }
    else{
        std::cout << "YES" << std::endl;
        return;
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