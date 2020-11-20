/*
Assignment 6
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.length();j++){
			int cnt=1;
			while(j+1<s.length()&&s[j+1]==s[j]){
				j++;
				cnt++;
			}
			cout<<s[j]<<cnt;
		}
		cout<<endl;
	}
}
