#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;//declaro un vector de tamaño
int buscar(int l,int r,int x){
	int m=(l+r)/2;//sacamos el medio
	if(x==v[m]){//si ya encontre el numero
		return m;
	}
	if(l==r){
		if(x==v[l]){
			return l;
		}
		else{
			return -1;
		}
	}
	if(x<v[m]){
		return buscar(l,m,x);
	}
	if(x>v[m]){
		return buscar(m+1,r,x);
	}

}
int main(){	
	int n,x;
	cin>>n;//tamaño del vector
	for(int i=0;i<n;i++){
		cin>>x;//pido los datos
		v.push_back(x);
	}
	cin>>x;//el elemento a buscar
	sort(v.begin(),v.end());
	cout<<buscar(0,n-1,x)<<endl;
	return 0;
}