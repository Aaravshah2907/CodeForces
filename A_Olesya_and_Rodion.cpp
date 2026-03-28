#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    cin >> n >> t;
    string result = "";
    if (t < 10){
        while (n--){
            result += to_string(t);
        }
        cout << result << endl;
        return 0;
    } else {
        if (n > 1){
            n -=1;
            while (n--){
                result += to_string(1);
            }
            result += "0";
            cout << result << endl;
        } else {
            cout << -1 << endl;
            return 0;
        }
    } 
    return 0;
}
