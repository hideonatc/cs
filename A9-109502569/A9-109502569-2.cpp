/*
Assignment 9
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
char conti(char c){
	if(int(c)-48>=0&&int(c)-48<=9)
		return '+';
	else if(int(c)<=90&&int(c)>=65)
		return char(int(c)+32);
	else if(int(c)<=122&&int(c)>=97)
		return char(int(c)-32);
	else
		return '-';
}
int main(){
	char c;
	while(cin>>c){
		char r=conti(c);
		if(conti(c)=='+')
			cout<<"number"<<endl;
		else if(conti(c)=='-')
			break;
		else
			cout<<conti(c)<<endl;
	}
}