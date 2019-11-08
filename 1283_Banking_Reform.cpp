//link to the problem
//https://www.e-olymp.com/en/problems/1283

#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5]={1,5,10,25,50};
	int a, n;
	
	while(cin>>n){
		vector<int> dp(n+1,0);
		
		for(int i = 0; i<5; i++){
			dp[0] = 1;
			for(int j = arr[i]; j<=n; j++){
				dp[j] += dp[j - arr[i]];
			}
		}
		cout<<dp[n]<<endl;
	}
}