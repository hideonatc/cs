/*
Assignment 6
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		int num[26]={0};
		int l=s.length();
		char c;
		for(int j=0;j<l;j++){
			int d=0;
			if(isalpha(s[j]))
				c=s[j];
			while(isdigit(s[j])&&j<l){
				d=d*10+int(s[j])-int('0');
				j++;
			}
			num[int(c)-int('A')]=d;
			cout<<num<<" ";
		}
		for(int j=0;j<26;j++){
			if(num[j])
				for(int k=1;k<=num[j];k++)
					cout<<char(j+int('A'));
		}
		cout<<endl;
	}
}