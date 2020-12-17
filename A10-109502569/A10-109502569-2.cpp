/*
Assignment 10
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char* dict[99999];
int n=0;
void smallerthan(char* a,char* b){
	int idx=0;
}
void msort(){
	if(n==1)
		return;
	else{
		int idx=n-2;
		cout<<dict[n-1]<<" "<<dict[idx]<<endl;
		while(){
			cout<<dict[n-1]<<"<"<<dict[idx]<<endl;
			swap(dict[n-1],dict[idx]);
			idx--;
		}
	}
	return;
}
void minsert(void){
	printf("Please enter a word:\n");
	char* input = new char[10];
	cin>>input;
	dict[n++]=input;
	msort();
	return;
}
void mdelete(void){
	if(n==0){
		cout<<"Empty!"<<endl;
		return;
	}
	n--;
	return;
}
void mprint(void){
	for(int i=0;i<n;i++){
		printf("num: %d word: ",i+1);
		cout<<dict[i]<<endl;
	}
	return;
}
int main(){
	printf("(a)insert (b)delete (c)print (d)exit\n");
	char com;
	while(cin>>com){
		if(com=='a')
			minsert();
		else if(com=='b')
			mdelete();
		else if(com=='c')
			mprint();
		else
			break;	
		printf("(a)insert (b)delete (c)print (d)exit\n");
	}
}