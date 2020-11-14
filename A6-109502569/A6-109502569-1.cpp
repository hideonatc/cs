/*
Assignment 6
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
struct mat{
	int len,wid;
	int m[5][5]={0};
}a,b;
int main(){
	cout<<"Matrix A size = ";
	cin>>a.len>>a.wid;
	cout<<"Matrix B size = ";
	cin>>b.len>>b.wid;
	if(a.wid!=b.len)
		cout<<"Can't be multiplied"<<endl;
	else{
		cout<<"Matrix A"<<endl;
		for(int i=0;i<a.len;i++)
			for(int j=0;j<a.wid;j++)
				cin>>a.m[i][j];
		cout<<"Matrix B"<<endl;
		for(int i=0;i<b.len;i++)
			for(int j=0;j<b.wid;j++)
				cin>>b.m[i][j];
		//cout<<"Multiplication"<<endl;
		for(int i=0;i<a.len;i++){
			for(int j=0;j<b.wid;j++){
				int o=0;
				for(int k=0;k<a.wid;k++)
					o+=a.m[i][k]*b.m[k][j];
				cout<<o<<" ";
			}
			cout<<endl;
		}
	}
}