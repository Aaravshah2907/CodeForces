#include <iostream>

using namespace std;

void solve(){
    int a, b, c, d , x, y, max1, max2, min1, min2;
    cin >> a >> b >> c >> d;
    x = c-a;
    y = d-b;
    max1 = (a > b)? a : b;
    max2 = (x > y)? x : y;
    min1 = (a > b) ? b : a;
    min2 = (x > y) ? y : x;
    if ((max1 <= 2 * min1 + 2) && (max2 <= 2 * min2 + 2)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--){solve();}
    return 0;
}
