//link to the problem
//https://www.e-olymp.com/en/problems/1619

#include<bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int n, sum1, sum2, temp, m;
	vector<unsigned long long int>amount_of_money;
	cin>>n;
	m=n;
	amount_of_money.push_back(0);
	while(m--){
		cin>>temp;
		amount_of_money.push_back(temp);
	}
	
	for(int i=2;i<=n;i++){
		if(amount_of_money[i]+amount_of_money[i-2]>amount_of_money[i-1]){
			amount_of_money[i]+=amount_of_money[i-2];
		}
		else{
			amount_of_money[i]=amount_of_money[i-1];
		}
	}
	cout<<amount_of_money[n]<<endl;
}