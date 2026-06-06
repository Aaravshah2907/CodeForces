// Question Number : #####

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    vector<long long> a(t);
    for (int i = 0; i < t; i++)    {
        cin >> a[i];   
    }
    for (int i = t-2; i >= 0; i--)    {
        if (a[i] >= 0 && a[i+1] > 0) {
            a[i] = a[i+1] + a[i];
        } else if (a[i] <= 0 && a[i+1] >= 0)        {
            a[i] = a[i+1] + a[i];
        } else continue;
    }
    // cout << "Case #" << t << ": ";
    int counter = 0;
    for (int i = 0; i < t; i++)    {
        //cout << a[i] << " ";
        if (a[i] > 0)        {
            counter++;
        }  
    }
    cout << counter << "\n";
}

int main()
    {
        // Fast I/O
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        if (cin >> n)
        {
            while (n--)
            {
                solve();
            }
        }

        return 0;
    }
