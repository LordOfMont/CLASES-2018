#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,x;
	cin>>n;//tamaño del vector
	vector<int> v(n);//declaro un vector de tamaño n
	for(int i=0;i<n;i++){
		cin>>v[i];//pido los datos
	}
	cin>>x;//el elemento a buscar
	int pos=-1;//la posicion del elemento
	for(int i=0;i<n;i++){
		if(x==v[i]){
			pos=i;
		}
	}
	cout<<pos<<endl;
	return 0;
}