#include <iostream>
using namespace std;
int main(){
	pair<int,char> p;
	pair<int,int> q;
	pair<string,string> s;
	p.first=5;
	p.second='r';
	q.first=0;
	q.second=8;
	s=make_pair("Rodolfo","Rossiel");
	cout<<s.first<<endl;
	cout<<s.second<<endl;
	return 0;
}