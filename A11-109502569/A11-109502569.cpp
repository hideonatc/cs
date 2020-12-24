/*
Assignment 11
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<fstream>
using namespace std;
int sudo[9][9];
bool test(int a,int b){
	for(int i=0;i<9;i++)
		if(i!=b&&sudo[a][i]==sudo[a][b])
			return false;
	for(int i=0;i<9;i++)
		if(i!=a&&sudo[i][b]==sudo[a][b])
			return false;
	return true;
}
int main(){
	string file;
	cin>>file;
	ifstream myfile(file,ios::in);
	for(int i=0;i<9;i++)
		for(int j=0;j<9;j++)
			myfile>>sudo[i][j];
	myfile.close();
	bool ans=true;
	for(int i=0;i<=6&&ans;i+=3){
		for(int j=0;j<=6;j+=3){
			bool used[10]={0};
			for(int k=0;k<3;k++){
				for(int h=0;h<3;h++){
					if(!used[sudo[i+k][j+h]]&&test(i+k,j+h)){
						//printf("%d %d (%d)checked\n",i+k,j+h,sudo[i+k][j+h]);
						used[sudo[i+k][j+h]]=true;
					}
					else{
						//cout<<"ERROR at "<<i+k<<" "<<j+h<<endl;
						ans=false;
					}
				}
			}
		}
	}
	if(ans)
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
}