/*
Practice 8
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		if(s=="-1")
			break;
		bool flag=true;
		if(s.length()%2==0){
			int idx=s.length()/2-1;
			for(int i=0;i<s.length()/2;i++){
				if(s[idx-i]!=s[idx+i+1]){
					flag=false;
					break;
				}
			}
		}
		else{
			int idx=(s.length()-1)/2;
			for(int i=0;i<(s.length()-1)/2;i++){
				if(s[idx-i]!=s[idx+i]){
					flag=false;
					break;
				}
			}
		}
		if(flag)
			cout<<"Palindrome!"<<endl;
		else
			cout<<"Not Palindrome!"<<endl;
	}
}