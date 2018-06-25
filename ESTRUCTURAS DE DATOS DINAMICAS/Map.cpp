#include <iostream>
#include <map>
using namespace std;
int main(){
	map<string,int> m;
	m["enero"]=31;
	m["febrero"]=28;
	m["marzo"]=31;
	m["abril"]=30;
	m["mayo"]=31;
	m["junio"]=30;
	m["julio"]=31;
	m["agosto"]=31;
	m["septiembre"]=30;
	m["octubre"]=31;
	m["noviembre"]=30;
	m["diciembre"]=31;
	m["febrero"]=29;
	/*string s;
	cin>>s;
	cout<<m[s]<<endl;*/
	map<string,int>::iterator it;
	for(it = m.begin();it!=m.end();it++){
	cout << it->first << ' ' << it->second << endl;
	}
	return 0;
}