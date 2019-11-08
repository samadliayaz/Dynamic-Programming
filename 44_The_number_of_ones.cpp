//link to the problem
//https://www.e-olymp.com/en/problems/44

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1,0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i = 4; i <= n ; i++){
        int x = i;
        for(int j = 2; j <= x; j++){
            while(x % j == 0){
                x /= j;
                dp[i] += dp[j];
            }
        }
        if(dp[i] == 0 || dp[i-1] < dp[i]) dp[i] = dp[i-1] + 1;
    }

    cout << dp[n] << endl;
}