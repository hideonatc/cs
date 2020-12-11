/*
Practice 9
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
void bubble_sort(string s){
	for(int i=0;i<s.length();i++){
		for(int j=0;j<s.length()-i;j++){
			if(s[j]<s[j+1]){
				swap(s[j],s[j+1]);
			}
		}
	}
	cout<<s<<endl<<endl;
	return;
}
int main(){
	string s;
	while(cin>>s){
		if(s=="-1")
			break;
		bubble_sort(s);
	}
}