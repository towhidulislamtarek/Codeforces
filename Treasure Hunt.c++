#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> grid(n + 1, vector<int>(n + 1));
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> grid[i][j];
        }
    }

    dp[1][1] = grid[1][1];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == 1 && j == 1)
                continue;
            if (i > 1)
                dp[i][j] = max(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if (j > 1)
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }

    cout << dp[n][n] << endl;

    return 0;
}
