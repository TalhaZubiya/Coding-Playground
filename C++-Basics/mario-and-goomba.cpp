#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int travelTime = Y / X;

        cout << max(0, Z - travelTime) << endl;
    }

    return 0;
}