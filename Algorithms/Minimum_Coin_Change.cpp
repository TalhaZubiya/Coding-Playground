#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int CoinChange(vector<int> &coins, int amount, int n)
{
    vector<vector<int> > CC(n + 1, vector<int>(amount + 1, INT_MAX - 1));

    for (int i = 1; i <= n; i++)
        CC[i][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= amount; a++)
        {
            if (coins[i - 1] <= a)
                CC[i][a] = min(CC[i - 1][a], 1 + CC[i][a - coins[i - 1]]);
            else
                CC[i][a] = CC[i - 1][a];
        }
    }

    return CC[n][amount];
}

int main()
{
    int n, amount;

    cout << "Enter number of coins: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter the value of coins:\n";

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    cout << "Enter the total amount: ";
    cin >> amount;

    int coin = CoinChange(coins, amount, n);

    cout << "\nMin number of coins = " << coin << endl;

    return 0;
}