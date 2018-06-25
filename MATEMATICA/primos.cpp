#include <iostream>
using namespace std;
bool es_primo(int n){
	int c=0;//CONTADOR DE DIVISORES
	for(int i=1;i<=n;i++){//CICLO PARA PROBAR CON TODOS LOS 
		//NUMEROS MENORES QUE N
		if(n%i==0){//PREGUNTO SI ES DIVISOR
			c++;//CUENTA LOS DIVISORES
		}
	}
	if(c==2){//PREGUNTA SI SOLO HAY DOS DIVISORES
	return true;
	}
	else{
	return false;
	}
}
bool es_primo2(int n){
	if(n==1 or n==0) return false;
	for(int i=2;i*i<=n;i++){//NO TOMA EN CUENTA EL 1 ni N
		if(n%i==0){
			return false;//SI ENCUENTRA UN DIVISOR APARTE
			//DE 1 y N ya no es primo
		}
	}
	return true;//si no encuentra divisor devuele SI
}
int main(){
	cout<<es_primo(2377)<<endl;//INVOCAR
	cout<<es_primo2(4)<<endl;
	return 0;
}