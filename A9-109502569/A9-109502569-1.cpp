/*
Assignment 9
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
char stack[9999999];
int idx=-1;
void push(char c){
	stack[++idx]=c;
	return;
}
void pop(void){
	if(idx==-1){
		cout<<"empty"<<endl;
		return;
	}
	char rm=stack[idx--];
	cout<<rm<<endl;
	return;
}
void list(void){
	for(int i=0;i<=idx;i++)
		cout<<stack[i]<<" ";
	cout<<endl;
	return;
}
int main(){
	string input;
	while(cin>>input){
		if(input=="push"){
			char c;
			cin>>c;
			push(c);
		}
		else if(input=="pop")
			pop();
		else if(input=="list")
			list();
		else
			break;
	}
}