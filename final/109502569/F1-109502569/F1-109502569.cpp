#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main(){
	string a1,a2;
	while(cin>>a1){
		//string ans="";
		multiset<char> ans;
		if(a1=="-1")
			break;
		cin>>a2;
		for(int i=0;i<a1.length();i++){
			for(int j=0;j<a2.length();j++){
				if(a1[i]==a2[j]){
					ans.insert(a1[i]);
					a1[i]='0';
					a2[j]='0';
					break;
				}
			}
		}
		string f_ans="";
		for(multiset<char>::iterator it=ans.begin();it!=ans.end();it++){
			f_ans+=*it;
		}
		for(int i=f_ans.length();i>=0;i--)
			cout<<f_ans[i];
		cout<<endl<<endl;
	}
}