#include<bits/stdc++.h>
using namespace std;


void delete_mid(stack<int> &s,int k){
	if(k==1){
		s.pop();
		return;
	}
	int temp = s.top();
	s.pop();
	k-=1;
	delete_mid(s,k);
	s.push(temp);
}
int main(){
	stack<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s.push(t);
	}
	int k = n/2+1;
	delete_mid(s,k);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
