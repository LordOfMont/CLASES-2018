//ENTRADA
//4
//SALIDA
//1 1 1 1 
//2 2 2 2
//3 3 3 3
//4 4 4 4
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//PEDIR el dato
	int m[n][n];//CREO MI MATRIZ DE nxn
	for(int i=0;i<n;i++){//CONTROLA LAS FILAS
		for(int j=0;j<n;j++){//CONTROLA LAS COLUMNAS
			m[i][j]=i+1;//HACE LA MAGIA 
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}