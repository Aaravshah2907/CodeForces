#include <bits/stdc++.h>
using namespace std;

void fun(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int pk;
    cin >> pk;
    pk--; // Convert to 0-indexed

    int pkval = a[pk]; // This is the original target value
    int left = 0, right = n - 1;
    int turns = 0;

    while (left < pk || right > pk){
        // Evaluate left side taking 'turns' (parity) into account
        // If turns is odd, the real value is inverted (a[left] ^ 1)
        while (left < pk && (a[left] ^ (turns % 2)) == pkval){
            left++;
        }
        // Evaluate right side taking 'turns' into account
        while (right > pk && (a[right] ^ (turns % 2)) == pkval){
            right--;
        }

        // If either side still needs a flip
        if (left < pk || right > pk){
            turns++;
            // We don't advance left or right here manually.
            // We let the while loops re-evaluate them in the next iteration
            // under the new flipped state!
        }
    }

    // Check if the target index itself ended up inverted
    if ((a[pk] ^ (turns % 2)) != pkval)
    {
        turns++;
    }

    cout << turns << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        fun();
    }
    return 0;
}