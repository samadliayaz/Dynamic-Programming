//link to the problem
//https://www.e-olymp.com/en/problems/263

#include<bits/stdc++.h>

using namespace std;

int main(){
   int n;
   cin >> n;

   int fibb[n+1];

   fibb[1] = 2;
   fibb[2] = 4;
   fibb[3] = 7;

   for(int i = 4; i <= n; i++){
       fibb[i] = (fibb[i-1] + fibb[i-2] + fibb[i-3]) % 12345;
   }

   cout << fibb[n] << endl;
}