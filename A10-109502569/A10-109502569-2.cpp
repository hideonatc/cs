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
bool smallerthan(char* a,char* b){
	int idx=0;
	while(idx<10){
		if(a[idx]<b[idx])
			return true;
		else if(a[idx]==b[idx])
			idx++;
		else
			return false;
	}
	return false;
}
void msort(){
	if(n==1)
		return;
	else{
		int idx=n-2,now=n-1;
		while(idx>=0&&smallerthan(dict[now],dict[idx])){
				swap(dict[now],dict[idx]);
				idx--;
				now--;
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