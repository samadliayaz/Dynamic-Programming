//link to the problem
//https://www.e-olymp.com/en/problems/806

#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;
   
int main(){
    ll height_of_platform[100005];
    ll height_of_platform2[100005];

    height_of_platform[0] = INT_MAX;
    height_of_platform2[1] = 0; 
    int n;

    cin >> n;
    for(int i = 1; i <=n; i++){
        cin >> height_of_platform[i];
    }
    height_of_platform[n+1] = INT_MAX;

    for(int i = 2; i <=n; i++){
        ll x = height_of_platform2[i-1]+(height_of_platform[i] - height_of_platform[i-1]) * (height_of_platform[i] - height_of_platform[i-1]);
        ll y = height_of_platform2[i-2]+3*(height_of_platform[i] - height_of_platform[i-2])*(height_of_platform[i] - height_of_platform[i-2]);
        ll z = height_of_platform2[i-1] + 3 * (height_of_platform[i+1] - height_of_platform[i-1]) * (height_of_platform[i+1] - height_of_platform[i-1]) + (height_of_platform[i] - height_of_platform[i+1]) * (height_of_platform[i] - height_of_platform[i+1]);
        if(x < y && x < z){
            height_of_platform2[i] = x;
        }
        else if(y < z){
            height_of_platform2[i] = y;
        }
        else{
            height_of_platform2[i] = z;
        }
        
    }
    cout << height_of_platform2[n] << endl;


}