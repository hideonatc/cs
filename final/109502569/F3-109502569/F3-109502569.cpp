#include<iostream>
#include<set>
using namespace std;
int main(){
	string input;
	while(cin>>input){
		if(input=="-1")
			break;
		set<char> in;
		for(int i=0;i<input.length();i++)
			in.insert(input[i]);
		for(set<char>::iterator it=in.begin();it!=in.end();it++){
			char out=*it;
			cout<<char(int(out)-32);
		}
		cout<<endl<<endl;
	}
}