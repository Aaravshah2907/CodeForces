// Question Number : 141A

#include <bits/stdc++.h>
using namespace std;


int main()
    {
        // Fast I/O
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        string a,b,c;
        map<char,int> list_words;
        cin >> a >> b >> c;
        for (char ch : a){
            list_words[ch]++;
        }
        for (char ch : b){
            list_words[ch]++;
        }
        for (char ch : c){
            list_words[ch]--;
        }
        for (auto it : list_words){
            if (it.second != 0){
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
        

        return 0;
    }
