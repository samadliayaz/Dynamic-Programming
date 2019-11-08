//link to the problem
//https://www.e-olymp.com/en/problems/588

#include<bits/stdc++.h>

using namespace std;
       
int main(){
	int n,a,b;
    vector<int> height_of_platform;

    unsigned long long int s=0,s1,s2,swap;
    cin>>n;
    
    height_of_platform.push_back(0);
    
    while(n--){
               cin>>a;
               height_of_platform.push_back(a);
    }
    
    s1=0;
    s2=abs(height_of_platform[2]-height_of_platform[1]);
    
    for(int i=3; i < height_of_platform.size(); i++){
        swap=s2;
        a=abs(height_of_platform[i]-height_of_platform[i-1]);
        b=abs(height_of_platform[i]-height_of_platform[i-2]);
        b*=3;
        s1+=b;
        s2+=a;
        s2=min(s1,s2);
        s1=swap;
    }
    
  	cout<<s2<<endl;
}