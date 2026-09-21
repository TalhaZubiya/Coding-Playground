#include <iostream>
#include <vector>

using namespace std;

int CoinChange(vector<int> coins, int amount)
{
    int n = coins.size();

    vector<vector<int> > CC(n + 1, vector<int>(amount + 1, 0));

    for (int i = 0; i <= n; i++)
        CC[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= amount; a++)
        {
            if (coins[i - 1] <= a)
                CC[i][a] = CC[i - 1][a] + CC[i][a - coins[i - 1]];
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

    cout << "Enter coin values:\n";

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    cout << "Enter amount: ";
    cin >> amount;

    int ways = CoinChange(coins, amount);

    cout << "\nNumber of ways = " << ways << endl;

    return 0;
}