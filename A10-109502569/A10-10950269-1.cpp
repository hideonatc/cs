/*
Assignment 10
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<cstdio>
using namespace std;
char* dict[99999];
int n=0;
void insert(char* idx){
	dict[n]=idx;
	return;
}
int main(){
	while(1){
		char* input = new char[10];
		cin>>input;
		if(input[0]=='-'&&input[1]=='1'&&input[2]=='\0')
			break;
		else{
			insert(input);
			n++;
		}
	}
	for(int i=0;i<n;i++){
		printf("num: %d word: ",i+1);
		cout<<dict[i]<<endl;
	}
}