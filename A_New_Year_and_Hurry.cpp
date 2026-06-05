// Question Number : 750A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    int time_re = 240 - k;
    int count = 0;
    for (int i = 1; i <= n; i++){
        time_re -= 5*i;
        if (time_re >= 0){
            count++;
        }
        else{
            break;
        }
    }
    cout << count << endl;

    return 0;
}
