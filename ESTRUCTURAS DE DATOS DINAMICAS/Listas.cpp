#include <iostream>
#include <list>
using namespace std;
int main(){
	//CREAMOS LA LISTA
	list<char> a;
	//PONER ELEMENTOS
	a.push_back('s');
	a.push_back('a');
	a.push_back('r');
	a.push_back('a');
	a.push_back('i');
	cout<<"tamanio "<<a.size()<<endl;//.size() obtiene el tamanio de la lista
	if(a.empty()==true){
		cout<<"Vacio"<<endl;
	}
	else{
		cout<<"No esta vacio"<<endl;
	}
	cout<<a.front()<<endl;
	cout<<a.back()<<endl;
	a.pop_back();
	a.pop_front();
	list<char>::iterator it;
	for(it=a.begin();it!=a.end();it++){
		cout<<*it<<endl;
	}
	return 0;	
}