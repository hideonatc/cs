/*
Assignment 8
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
		int max_len=-1,pos;
		for(int i=0;i<s.length();i++){
			int idx=0;
			while(i-idx-1>=0&&i+idx+1<s.length()&&s[i-idx-1]==s[i+idx+1])
				idx++;
			if(idx>0&&2*idx+1>max_len){
				pos=i;
				max_len=2*idx+1;
			}
			idx=0;
			while(i-idx>=0&&i+idx+1<s.length()&&s[i-idx]==s[i+idx+1])
				idx++;
			if(idx>0&&2*idx>max_len){
				pos=i;
				max_len=2*idx;
			}
		}
		if(max_len>1){
			if(max_len%2==1){
				cout<<"Palindrome:";
				for(int i=pos-(max_len-1)/2;i<=pos+(max_len-1)/2;i++)
					cout<<s[i];
				cout<<endl<<"Length:"<<max_len<<endl<<endl;
			}
			else{
				cout<<"Palindrome:";
				for(int i=pos+1-max_len/2;i<=pos+max_len/2;i++)
					cout<<s[i];
				cout<<endl<<"Length:"<<max_len<<endl<<endl;
			}
		}
		else{
			cout<<"Palindrome not existed!"<<endl<<endl;
		}
	}
}