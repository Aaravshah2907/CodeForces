#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    if (n < m){
        cout << -1 << endl;
        return 0;
    }
    int k = (n+1)/2;
    while (k%m != 0){
        k++;
    }
    cout << k << endl;
    return 0;
}
