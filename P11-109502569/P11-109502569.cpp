/*
Practice 11
Name: 陳彥呈
Student Number:109502569
Course 2020-CE1003-B
*/
#include<iostream>
#include<fstream>
using namespace std;
int arr[3][3]={0};
char winner;
bool check_win(void){
	for(int i=0;i<3;i++){
		if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]){
			winner=(arr[i][0]==1?'O':'X');
			return true;
		}
	}
	for(int i=0;i<3;i++){
		if(arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]&&arr[0][i]){
			winner=(arr[0][i]==1?'O':'X');
			return true;
		}
	}
	if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[0][0]){
			winner=(arr[0][0]==1?'O':'X');
			return true;
	}
	if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[0][2]){
			winner=(arr[0][2]==1?'O':'X');
			return true;
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			if(!arr[i][j]){
				winner='t';
				return false;
			}
	return true;
}
char trans(int i){
	if(i==0)
		return ' ';
	return i==1?'O':'X';
}
void print(void){
	for(int i=0;i<3;i++){
		printf("|%c.%c.%c|\n",trans(arr[i][0]),trans(arr[i][1]),trans(arr[i][2]));
	}
	cout<<endl;
	return;
}
int main(){
	bool cir=true;
	while(true){
		int x,y;
		cin>>x>>y;
		cout<<endl;
		if(arr[x][y]||x>2||x<0||y>2||y<0){
			cout<<"Invalid place!"<<endl<<endl;
			continue;
		}
		arr[x][y]=(cir?1:2);
		print();
		if(check_win())
			break;
		cir=cir?false:true;
	}
	if(winner=='t')
		cout<<"Draw!"<<endl;
	else
		printf("%c Win!\n",winner);
	ofstream myfile("OOXX-109502569.txt",ios::out);
	if(winner=='t')
		myfile<<"Draw!\n\n";
	else
		myfile<<winner<<" Win!\n\n";
	for(int i=0;i<3;i++)
		myfile<<"|"<<trans(arr[i][0])<<"."<<trans(arr[i][1])<<"."<<trans(arr[i][2])<<"|"<<endl;
	myfile<<endl;
	myfile.close();
}
//0 2 0 0 1 0 0 1 1 1 1 2 2 2 2 0 2 1