#include <iostream>
#include <map>
using namespace std;
int main(){
	string s;
	map<string,int>m;
	while(cin>>s){
		m[s]++;
	}
	cout<<m.size()<<endl;
	map<string,int>::iterator it=m.find("Isabel");
	if (it != m.end()) {
   		cout<<"Esta"<<endl;
	} 
	else{
   		cout<<"No esta"<<endl;
   	}
   	for(it=m.begin();it!=m.end();it++){
   		cout<<it->first<<" "<<it->second<<endl;
   	}

	return 0;
}