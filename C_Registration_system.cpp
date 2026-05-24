#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    unordered_map<string, int> registry;
    string name;

    while (n--) {
        cin >> name;
        auto it = registry.find(name);
        if (it == registry.end()) {
            cout << "OK";
            registry[name] = 1;
        } else {
            cout << name << it->second;
            it->second += 1;
        }
        if (n > 0) cout << '\n';
    }

    return 0;
}
