#include <iostream>
#include <queue>//LIBRERIA PARA USAR COLAS
using namespace std;
int main(){
	queue<int> cola;//CREA UNA COLA 
	cola.push(2);//PONE ELEMENTOS A LA COLA
	cola.push(42);
	cola.push(1);
	cola.push(7);
	while(!cola.empty()){//EMPTY devuelve true si 
		//la cola esta vacia y false en caso contrario
		int x=cola.front();//OBTIENE EL VALOR DEL
		//PRINCIPIO DE LA COLA
		cola.pop();//QUITA EL VALOR DE LA CIMA
		cout<<x<<endl;
	}
	return 0;
}