#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string LCS(string S1, string S2)
{
    int m = S1.length();
    int n = S2.length();

    vector<vector<int>> LCS(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (S1[i - 1] == S2[j - 1])
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            else
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        }
    }

    int i = m, j = n;
    string lcs = "";

    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            lcs += S1[i - 1];
            i--;
            j--;
        }
        else if (LCS[i - 1][j] > LCS[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    int start = 0, end = lcs.length() - 1;

    while (start < end)
    {
        char temp = lcs[start];
        lcs[start] = lcs[end];
        lcs[end] = temp;

        start++;
        end--;
    }

    return lcs;
}

int main()
{
    string S1, S2;

    cout << "Enter first string: ";
    cin >> S1;

    cout << "Enter second string: ";
    cin >> S2;

    string lcs = LCS(S1, S2);

    cout << "\nLength of LCS = " << lcs.length() << endl;
    cout << "LCS = " << lcs << endl;

    return 0;
}