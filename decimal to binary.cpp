#include<iostream>
using namespace std; 
int main ()
{
    int num, bin;
    cout << "Enter the number : ";
    cin >> num;
//    Easy method to convert decimal to binary(O(logn))
//-------------------------------------------------------
//    cout << "The binary equivalent of " << num << " is ";
//    while (num > 0)
//    {
//        bin = num % 2;
//        cout << bin;
//        num /= 2;
//    }

//	With the help of bit manipulation(O(1))
//--------------------------------------------------------
	for(int i=31;i>=0;--i){
		if(num&(1<<i)){
			cout<<"1";
		}
		else
			cout<<"0";
	}
    return 0;
}
