#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        bool unique = true;
        for (int i = 0; i < n / 2; i++) {
            int j = n - 1 - i;
            if (s[i]== '?' && s[j]== '?') {
                unique = false;
                break;
            }
        }
        if (n % 2==1 && s[n/2]== '?') {
            unique = false;
        }
        if (unique)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}