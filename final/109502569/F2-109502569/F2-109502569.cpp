#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int>a,b;
	int in,max=-2;
	while(cin>>in){
		if(max<in)
			max=in;
		if(in==-1)
			break;
		a.insert(in);
	}
	while(cin>>in){
		if(max<in)
			max=in;
		if(in==-1)
			break;
		b.insert(in);
	}
	bool ans=true;
	bool subset=true;
	for(set<int>::iterator it=b.begin();it!=b.end();it++){
		if(ans==false){
			subset=false;
			break;
		}
		for(set<int>::iterator it2=a.begin();it2!=a.end();it2++){
			if(*it==*it2){
				ans=true;
				break;
			}
			ans=false;
		}
	}
	if(subset)
		printf("B is a subset of A.\n");
	else
		printf("B is not a subset of A.\n");
	printf("A - B = { ");
	for(set<int>::iterator it=a.begin();it!=a.end();it++){
		bool again=false;
		for(set<int>::iterator it2=b.begin();it2!=b.end();it2++){
			if(*it==*it2){
				again=true;
				break;
			}
		}
		if(!again)
			cout<<*it<<" ";
	}
	printf("}\n");
	set<int> c;
	for(set<int>::iterator it=a.begin();it!=a.end();it++)
		c.insert(*it);
	for(set<int>::iterator it=b.begin();it!=b.end();it++)
		c.insert(*it);
	printf("A U B = { ");
	for(set<int>::iterator it=c.begin();it!=c.end();it++)
		cout<<*it<<" ";
	printf("}\n");
}