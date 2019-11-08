//link to the problem
//https://www.e-olymp.com/en/problems/987

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0,a;
	cin>>n;
	vector<int>coordinate_of_nails;
	
	while(n--){
		cin>>a;
		coordinate_of_nails.push_back(a);
	}
	vector<int>dp(coordinate_of_nails.size()+1,0);
	sort(coordinate_of_nails.begin(),coordinate_of_nails.end());
	sum=coordinate_of_nails[1]-coordinate_of_nails[0];
	
	if(coordinate_of_nails.size()==1){
                       cout<<0<<endl;
                       return 0;
                       }
    if(coordinate_of_nails.size()==2){
                       cout<<coordinate_of_nails[1]-coordinate_of_nails[0]<<endl;
                       return 0;
                       }
    if(coordinate_of_nails.size()==3){
                       cout<<coordinate_of_nails[2]-coordinate_of_nails[0]<<endl;
                       return 0;
                       }
    dp[1]=coordinate_of_nails[1]-coordinate_of_nails[0];
    dp[2]=coordinate_of_nails[2]-coordinate_of_nails[0];
    for(int i=3;i<coordinate_of_nails.size();i++){
            dp[i]=min(dp[i-2]+coordinate_of_nails[i]-coordinate_of_nails[i-1],dp[i-1]+coordinate_of_nails[i]-coordinate_of_nails[i-1]);
            }
    cout<<dp[coordinate_of_nails.size()-1]<<endl;
	
}