// Reverse string using recursion..

#include <iostream>
using namespace std;

void rev(string s,int i){
    // base condition
    if(i>s.length()){
        return;
    }
    // hypothesis step
    rev(s,i+1);
    // induction step
    cout<<s[i-1];
}
int main()
{
    string s = "abcd";
    rev(s,0);
   
   return 0;
}
