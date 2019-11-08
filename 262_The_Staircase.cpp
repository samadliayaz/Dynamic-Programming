//link to the problem
//https://www.e-olymp.com/en/problems/262

#include<bits/sstdc++.h>
using namespace std;

int main(){
    int n, k, a;
    vector<int>stairs;
    
    cin>>n;
    
    stairs.push_back(0);
    
    while(n--){
               cin>>a;
               stairs.push_back(a);
               }
               
    stairs.push_back(0);
    
    cin>>k;
    
    for(int i = 1; i < stairs.size(); i++){
    	int maxi = INT_MIN;
    	
        for(int j = i-1; j >= i-k; j--){
            if(j < 0){
                 	break;
                    }
                    
			if(stairs[i] + stairs[j] > maxi)
				maxi = stairs[i] + stairs[j];
        }
        
    	stairs[i] = maxi;
	}	
                          
		cout<<stairs[stairs.size()-1]<<endl;

}