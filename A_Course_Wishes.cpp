// Question Number : 2216A

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i)
    {
        cin >> a[i];
    }

    // Store courses as pairs of (initial_level, course_id)
    vector<pair<int, int>> courses(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> courses[i].first;
        courses[i].second = i + 1; // 1-based indexing for course IDs
    }

    // Sort descending by initial level so we clear from top to bottom
    sort(courses.rbegin(), courses.rend());

    vector<int> ops;

    // Process each course and push it all the way to k + 1
    for (int i = 0; i < n; ++i)
    {
        int current_level = courses[i].first;
        int id = courses[i].second;

        while (current_level < k + 1)
        {
            ops.push_back(id);
            current_level++;
        }
    }

    // Output the results
    cout << ops.size() << "\n";
    for (int i = 0; i < ops.size(); ++i)
    {
        cout << ops[i] << (i == ops.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main()
{
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}