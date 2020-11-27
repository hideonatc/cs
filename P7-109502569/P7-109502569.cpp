/*
Practice 7
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
int f(int n);
int main(){
	int in;
	cin>>in;
	while(in!=0){
		cout<<f(in)<<endl;
		cin>>in;
	}
}
int f(int n){
	if(n<=0)
		return 0;
	else if(n%2==0)
		return 2+f(n/2);
	else{
		int k=0;
		while(n>0){
			k+=n%10;
			n/=10;
		}
		return 3+f(k-5);
	}
}