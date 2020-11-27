/*
Assignment 7
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<cstdio>
using namespace std;
bool e=false;
void guess(string g,string as){
	int a=0,b=0;
	for(int i=0;i<4;i++)
		if(as[i]==g[i])
			a++;
		else
			for(int j=0;j<4;j++)
				if(g[i]==as[j])
					b++;
	if(!e&&a==4){
		printf("You Win!\n");
		e=true;
		return;
	}
	printf("%dA%dB\n",a,b);
	return;
}
int main(){
	string ans,in;
	cout<<"Input Number:";
	cin>>ans;
	while(!e){
		cout<<"Guess:";
		cin>>in;
		guess(in,ans);
	}
}