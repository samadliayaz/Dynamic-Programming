//link to the problem
//https://www.e-olymp.com/en/problems/4051

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    vector<int>dp;
    
    dp.push_back(1);
    dp.push_back(1);
    
    cin>>n>>k;
    
    for(int i=2;i<n;i++){
                     dp.push_back(0);
                     for(int j=i-1;j>=i-k;j--){
                                           if(j<0){
                                                   break;
                                                   }
                                           dp[i]=dp[i]+dp[j];
                                           }
       
                                           }
   cout<<dp[n-1]<<endl;
}