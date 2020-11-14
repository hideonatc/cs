/*
Assignment 6
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<cstdio>
#include<ctype.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		for(int j=0;j<s.length();){
			int d=0;
			char c=s[j++];
			while(isdigit(s[j]))
				d=d*10+int(s[j++])-int('0');
			if(d)
				for(int k=1;k<=d;k++)
					cout<<c;
		}
		cout<<endl;
	}
}