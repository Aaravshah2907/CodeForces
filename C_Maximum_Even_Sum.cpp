#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // for sqrt
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long max_even = -1;
        long long limit = (long long)sqrt((double)b);
        bool a_even = (a % 2 == 0);

        for (long long i = 1; i <= limit; i++)
        {
            if (b % i == 0)
            {
                long long d = b / i;

                // s1 = a*i + d
                if (a_even)
                {
                    if (d % 2 == 0)
                    {
                        long long s1 = a * i + d;
                        if (s1 > max_even)
                            max_even = s1;
                    }
                }
                else
                {
                    if ((i % 2) == (d % 2))
                    {
                        long long s1 = a * i + d;
                        if (s1 > max_even)
                            max_even = s1;
                    }
                }

                // s2 = a*d + i (only if i != d)
                if (i != d)
                {
                    if (a_even)
                    {
                        if (i % 2 == 0)
                        {
                            long long s2 = a * d + i;
                            if (s2 > max_even)
                                max_even = s2;
                        }
                    }
                    else
                    {
                        if ((d % 2) == (i % 2))
                        {
                            long long s2 = a * d + i;
                            if (s2 > max_even)
                                max_even = s2;
                        }
                    }
                }
            }
        }

        cout << max_even << "\n";
    }

    return 0;
}
