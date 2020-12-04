/*
Assignment 8
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Input Size:";
	while(cin>>n){
		bool flag=true;
		if(n==-1)
			break;
		int arr[10][10];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(arr[i][j]!=arr[n-i-1][n-j-1]){
					flag=false;
					break;
				}
		if(flag)
			cout<<"Symmetric!"<<endl;
		else
			cout<<"Non-Symmetric!"<<endl;
		cout<<"Input Size:";
	}
}