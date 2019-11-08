//link to the problem
//https://www.e-olymp.com/en/problems/799

#include<bits/stdc++.h>

using namespace std;

struct str{
    int sell_one,sell_two,sell_three;
};

int main(){
   

   int n, x,y,z;
   cin >> n;
   vector<str> tickets(n+1);
   int dp[n+5];
   dp[0] = 0;

   for(int i = 0 ; i < n; i++){
       cin >> x >> y >> z;
       tickets[i].sell_one = x;
       tickets[i].sell_two = y; 
       tickets[i].sell_three = z;
   }

    dp[1] = tickets[0].sell_one;
    dp[2] = min(tickets[0].sell_one + tickets[1].sell_two, tickets[0].sell_three);
   
   for(int i = 3 ; i <= n; i++){
       dp[i] = min(dp[i-3] + tickets[i-3].sell_three, min(dp[i-2] + tickets[i-2].sell_two, dp[i-1] + tickets[i-1].sell_one));
   }


   cout << dp[n] << endl;
   
}