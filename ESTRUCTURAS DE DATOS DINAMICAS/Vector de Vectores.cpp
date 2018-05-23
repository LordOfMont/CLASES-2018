#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
int main(){
	//ESENCIAL PARA CREAR VECTOR DE VECTORES
	//DE ENTEROS
	vector<vi> v;
	v.assign(6,vi());
	v[0].push_back(2);
	v[0].push_back(3);
	v[0].push_back(4);
	v[1].push_back(0);
	v[1].push_back(1);
	v[2].push_back(3);
	v[2].push_back(3);
	v[2].push_back(2);
	v[2].push_back(0);
	v[2].push_back(7);
	v[2].push_back(0);
	v[3].push_back(1);
	v[3].push_back(3);
	v[4].push_back(0);
	v[4].push_back(0);
	v[4].push_back(3);
	cout<<v[2][4]<<endl;//IMPRIME DEL VECTOR 2 LA POSICION 4
	cout<<v[0][2]<<endl;//IMPRIME DEL VECTOR 0 LA POSICION 2
	for(int i=0;i<6;i++){//EL LIMITE ES EL TAMAÑO DEL VECTOR DE VECTORES
		for(int j=0;j<v[i].size();j++){//CADA VECTOR TIENE UN TAMAÑO IND.
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
