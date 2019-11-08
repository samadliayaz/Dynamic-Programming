//link to the problem
//https://www.e-olymp.com/en/problems/798

#include<bits/stdc++.h>

using namespace std;

int main(){
    int height_of_platform[100005];
    int dp[100005];
    int all_paths[100005];
    path_of_gameror<int> path_of_gamer;
    height_of_platform[0] = INT_MAX;
    dp[1] = 0; 
    int n;

    cin >> n;
    for(int i = 1; i <=n; i++){
        cin >> height_of_platform[i];
    }

    for(int i = 2; i <=n; i++){
        if(dp[i-1]+abs(height_of_platform[i] - height_of_platform[i-1]) < dp[i-2]+3*abs(height_of_platform[i] - height_of_platform[i-2])){
            all_paths[i] = i - 1;
            dp[i] = dp[i-1]+abs(height_of_platform[i] - height_of_platform[i-1]);
        }
        else{
            all_paths[i] = i - 2;
            dp[i] = dp[i-2]+3*abs(height_of_platform[i] - height_of_platform[i-2]);
        }
        
    }
    cout << dp[n] << endl;

    path_of_gamer.push_back(n);
    int i = n;


    while(i > 1){ 
        i = all_paths[i];
        path_of_gamer.push_back(i);
    }

    cout << path_of_gamer.size() << endl;

    for(i = path_of_gamer.size()-1; i>=0; i--){
        cout << path_of_gamer[i] << " ";
    }

}