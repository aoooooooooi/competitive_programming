#include <iostream>

using namespace std;

const int MAX = 100;
const int MOD = 1e9 + 7;
int dp[MAX][MAX];

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i + 1 <= n; ++i) {
        for (int j = 0; j + 1 <= k; ++j) {
            if (j == 0) dp[i][j] = 1;
            else if (i == 0) dp[i][j] = 0;
            dp[i + 1][j + 1] = (dp[i][j] + dp[i][j + 1]) % MOD;
        }
    }
    cout << dp[n][k] << endl;
}