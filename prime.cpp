#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//sieve of eratosthenes algo for find prime numbers(O(n))
//-----------------------------------------------------------
int main(){
	int n;
	cin>>n;
	vector<char> v2(n+1,true);
	v2[0]=false;
	v2[1]=false;
	for(int i=2;i*i<=n;i++){
		if(v2[i]){
			for(int j=i*i;j<=n;j+=i){
				v2[j]=false;
			}
		}
	}
	for(int i=0;i<v2.size();i++){
		if(v2[i]==true)
			cout<<i<<" ";
	}	
}
