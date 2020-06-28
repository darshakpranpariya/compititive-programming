#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int temp){
	if(s.empty()){
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	insert(s,temp);
	s.push(val);
}
void reverse_stack(stack<int> &s){
	if(s.empty()){
		return;
	}
	int temp = s.top();
	s.pop();
	reverse_stack(s);
	insert(s,temp);
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
	reverse_stack(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
