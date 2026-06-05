// Question Number : 4B

#include <bits/stdc++.h>
using namespace std;

int main()
    {
        // Fast I/O
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int d, sumTime;
        cin >> d >> sumTime;
        vector<int> minTime(d), maxTime(d);

        for (int i = 0; i < d; i++) {
            cin >> minTime[i] >> maxTime[i];
        }

        int minPossible = accumulate(minTime.begin(), minTime.end(), 0);
        int maxPossible = accumulate(maxTime.begin(), maxTime.end(), 0);
        if (sumTime < minPossible || sumTime > maxPossible) {
            cout << "NO\n";
            return 0;
        }
        cout << "YES\n";
        for (int i = 0; i < d; i++) {
            int time = minTime[i] + min(sumTime - minPossible, maxTime[i] - minTime[i]);
            cout << time << " ";
            sumTime -= time;
            minPossible -= minTime[i];
        }
        cout << "\n";
        return 0;
    }
