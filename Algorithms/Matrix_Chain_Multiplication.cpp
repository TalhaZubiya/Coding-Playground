#include <iostream>
#include <vector>
#include <string>

using namespace std;

string MCM(vector<int> &p, int n)
{
    vector<vector<int>> M(n, vector<int>(n, 0));
    vector<vector<int>> K(n, vector<int>(n, 0));

    for (int length = 2; length < n; length++)
    {
        for (int i = 1; i < n - length + 1; i++)
        {
            int j = i + length - 1;

            M[i][j] = 1e9;

            for (int k = i; k < j; k++)
            {
                int cost = M[i][k] + M[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < M[i][j])
                {
                    M[i][j] = cost;
                    K[i][j] = k;
                }
            }
        }
    }

    cout << "\nMinimum number of scalar multiplications = "
         << M[1][n - 1] << endl;

    return "";
}

int main()
{
    int n;

    cout << "Enter number of matrices: ";
    cin >> n;

    vector<int> p(n + 1);

    cout << "Enter matrix dimensions:\n";

    for (int i = 0; i <= n; i++)
        cin >> p[i];

    MCM(p, n + 1);

    return 0;
}