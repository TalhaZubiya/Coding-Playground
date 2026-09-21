#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void knapsack(int n, int c, vector<int>& weight, vector<int>& profit)
{
    vector<vector<int>> KS(n + 1, vector<int>(c + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= c; w++)
        {
            if (weight[i - 1] <= w)
            {
                KS[i][w] = max(
                    profit[i - 1] + KS[i - 1][w - weight[i - 1]],
                    KS[i - 1][w]
                );
            }
            else
            {
                KS[i][w] = KS[i - 1][w];
            }
        }
    }

    cout << "\nMaximum Profit = " << KS[n][c] << endl;

    cout << "\nSelected Items:\n";

    int w = c;

    for (int i = n; i > 0 && w > 0; i--)
    {
        if (KS[i][w] != KS[i - 1][w])
        {
            cout << "Item " << i
                 << " (Weight: " << weight[i - 1]
                 << ", Profit: " << profit[i - 1] << ")\n";

            w -= weight[i - 1];
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    vector<int> weight(n), profit(n);
    vector<string> item(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of item " << i + 1 << ": ";
        cin >> item[i];

        cout << "Enter weight of item " << i + 1 << ": ";
        cin >> weight[i];

        cout << "Enter profit of item " << i + 1 << ": ";
        cin >> profit[i];
    }

    int c;

    cout << "\nEnter knapsack capacity: ";
    cin >> c;

    knapsack(n, c, weight, profit);

    return 0;
}