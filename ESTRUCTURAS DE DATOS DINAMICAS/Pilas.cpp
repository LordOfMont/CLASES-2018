#include <iostream>
#include <stack>//LIBRERIA PARA USAR PILAS
using namespace std;
int main(){
	stack<int> pila;//CREA UNA PILA 
	pila.push(2);//APILA ELEMENTOS EN LA PILA
	pila.push(42);
	pila.push(1);
	pila.push(7);
	while(!pila.empty()){//EMPTY devuelve true si 
		//la pila esta vacia y false en caso contrario
		int x=pila.top();//OBTIENE EL VALOR DE LA CIMA
		pila.pop();//QUITA EL VALOR DE LA CIMA
		cout<<x<<endl;
	}
	return 0;
}