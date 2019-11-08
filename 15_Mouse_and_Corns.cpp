//link to the problem
//https://www.e-olymp.com/en/problems/15

#include<bits/stdc++.h>

using namespace std;

int main(){
	int dp[101][101];
	int m,n;
	string str="";
	cin>>m>>n;
	
	for(int i=0; i<=n; i++){
		dp[m][i]=-1;
	}
	for(int i=0; i<=m; i++){
		dp[i][0]=-1;
	}
	
	for(int i=0; i<m; i++){
		for(int j=1; j<=n; j++){
			cin>>dp[i][j];
		}
	}
	dp[m][1]=0;
	dp[m-1][0]=0;
	
	
	
	for(int i=m-1; i>=0; i--){
		for(int j=1; j<=n; j++){
			dp[i][j] += max(dp[i+1][j],dp[i][j-1]);
		}
	}

	int i=0;
	int j=n;
	while(i!=m-1 || j!=1){
		if(dp[i][j-1]>dp[i+1][j]){
			j--;
			str+="R";
		}
		else{
			i++;
			str+="F";
		}
	}
	reverse(str.begin(),str.end());
	cout<<str<<endl;
}