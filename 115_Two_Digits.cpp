//link to the problem
//https://www.e-olymp.com/en/problems/115

#include<bits/stdc++.h>

using namespace std;

int fibb(int n){
    int arr[35];
    arr[0]=1;
	arr[1]=1;
    
    for(int i=2; i<=n; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    
	return arr[n];
}
            
int main(){
    int n;
    cin>>n;
    cout<<2*fibb(n)<<endl;
}