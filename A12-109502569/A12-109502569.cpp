/*
Assignment 12
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<fstream>
using namespace std;
string list[110][3];
int idx=0;
void mysort(int com){
	for(int i=0;i<idx;i++){
		for(int j=0;j<idx-i-1;j++){
			if(com==1&&list[j][0]>list[j+1][0]){
				swap(list[j][0],list[j+1][0]);
				swap(list[j][1],list[j+1][1]);
				swap(list[j][2],list[j+1][2]);
			}
			if(com==2&&list[j][1]>list[j+1][1]){
				swap(list[j][0],list[j+1][0]);
				swap(list[j][1],list[j+1][1]);
				swap(list[j][2],list[j+1][2]);
			}
			if(com==3&&(list[j][2]<list[j+1][2]||(list[j][2]==list[j+1][2]&&list[j][0]>list[j+1][0]))){
				swap(list[j][0],list[j+1][0]);
				swap(list[j][1],list[j+1][1]);
				swap(list[j][2],list[j+1][2]);
			}
		}
	}
	return;
}
int main(){
	string txt1,txt2;
	cin>>txt1>>txt2;
	ifstream data1(txt1,ios::in);
	ifstream data2(txt2,ios::in);
	while(!data1.eof()){
		data1>>list[idx][0]>>list[idx][1]>>list[idx][2];
		idx++;
	}
	while(!data2.eof()){
		data2>>list[idx][0]>>list[idx][1]>>list[idx][2];
		idx++;
	}
	printf("sort by (1)id (2)name (3)score\n");
	int com;
	cin>>com;
	if(com<0||com>3)
		cout<<"exit"<<endl;
	else{
		mysort(com);
		ofstream output("list-109502569.txt",ios::out);
		for(int i=0;i<idx;i++){
			cout<<list[i][0]<<" "<<list[i][1]<<" "<<list[i][2]<<endl;
			output<<list[i][0]<<" "<<list[i][1]<<" "<<list[i][2]<<endl;
		}
		output.close();
	}
	data1.close();
	data2.close();
}