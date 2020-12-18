/*
Practice 10
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
void f(int* x,int* y){
	int m=*x,n=*y;
	*x=m+n;
	*y=m*n;
	return;
}
int main(){
	int a,b;
	cin>>a>>b;
	f(&a,&b);
	cout<<a<<endl<<b<<endl;
}