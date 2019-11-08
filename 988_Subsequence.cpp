//link to the problem
//https://www.e-olymp.com/en/problems/988

#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &v, int l, int r, int key){
	while(r-l > 1){
		int m = r + (l - r)/2;
		if(v[m] > key){
			r = m;
		}
		else{
			l = m;
		}
	}
	return r;
}

int subsequence(vector<int> &vect){
	if(vect.size() == 0) return 0;
	
	vector<int> tail(vect.size(), 0);
	
	tail[0] = vect[0];
	int length = 1;
	
	for(int i=1; i < vect.size(); i++){
		if(vect[i] < tail[0]){
			tail[0] = vect[i];
		}
		else if(vect[i] > tail[length-1]){
			tail[length++] = vect[i];
		}
		else{
			tail[binary(tail, -1, length-1, vect[i])] = vect[i];
		}
	}
	return length;
	}

int main(){
	int n,a;
	vector<int>v;
	cin>>n;
	
	while(n--){
		cin>>a;
		v.push_back(a);
	}
	
	cout<<subsequence(v)<<endl;
}