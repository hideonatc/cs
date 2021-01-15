#include<iostream>
#include<fstream>
using namespace std;
char arr[10][10];
void change(int x,int y,char c){
	if(x-1>=0&&arr[x-1][y]!=c)
		arr[x-1][y]='.';
	if(x+1>=0&&arr[x+1][y]!=c)
		arr[x+1][y]='.';
	if(y+1<10&&arr[x][y+1]!=c)
		arr[x][y+1]='.';
	if(y-1>=0&&arr[x][y-1]!=c)
		arr[x][y-1]='.';
	return;
}
int main(){
	string txt;
	cin>>txt;
	ifstream input(txt,ios::in);
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			input>>arr[i][j];
	char c;
	while(cin>>c){
		if(c=='.')
			break;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(arr[i][j]==c)
					change(i,j,c);
			}
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	input.close();
}