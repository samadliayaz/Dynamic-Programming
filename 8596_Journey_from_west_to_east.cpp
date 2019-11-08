//link to the problem
//https://www.e-olymp.com/en/problems/8596

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
   ll n, a, b;
   cin>> n >> a >> b;
   ll cities[n+1];
   ll dp[n+1];
 
   for(ll i = 0 ;i < n; i++){
       cin>> cities[i];
   }

   dp[1] = min(a*(cities[1] - cities[0]),b);

   for(ll i = 2; i < n; i++){
       dp[i] = dp[i-1] + min(a*(cities[i] - cities[i-1]), b);
   }
   cout << dp[n-1] << endl;   
}