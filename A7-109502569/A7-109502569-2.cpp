/*
Assignment 7
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
int f(int n);
int main(){
	int n;
	while(cin>>n){
		if(n==0)
			break;
		cout<<f(n)<<endl;
	}
}
int f(int n){
	if(n<=4)
		return 3;
	else if(n<=9)
		return 2+f(n-2);
	else
		return 1+f(n-22)+f(f(n-30)-30);
}