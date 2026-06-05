// Question Number : 9A

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,max,num = 0, den = 6;
    cin >> x >> y;
    max = (x>y) ? x : y;
    num = den - max + 1;
    switch (num) {
        case 0: cout << "0/1\n"; break;
        case 1: cout << "1/6\n"; break;
        case 2: cout << "1/3\n"; break;
        case 3: cout << "1/2\n"; break;
        case 4: cout << "2/3\n"; break;
        case 5: cout << "5/6\n"; break;
        case 6: cout << "1/1\n"; break;
        default: cout << "0/1\n"; break;
    }
    return 0;
}
