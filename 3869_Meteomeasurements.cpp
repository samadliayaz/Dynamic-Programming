//link to the problem
//https://www.e-olymp.com/en/problems/3869

#include<bits/stdc++.h>

using namespace std;

int main(){
   int n, k; ;
   long double mini, maxi,  sum = 0;
   cin >> n >> k;

   int temperature[n+2];

   for(int i = 0 ; i < n; i++){
       cin >> temperature[i];
       if(i < k){
           sum += temperature[i];
       }
   }
   mini = maxi = double ((double) sum / (double) k);
   
   for(int i = 1; i <= n - k; i++){
       sum -= temperature[i-1];
       sum += temperature[i+k-1];

       double checking = double ((double) sum / (double) k);
       if(checking < mini) mini = checking;
       else if(checking > maxi) maxi = checking;
   }
    mini = round(mini);
    maxi = round(maxi);
   cout << mini  << endl << maxi  << endl;
}