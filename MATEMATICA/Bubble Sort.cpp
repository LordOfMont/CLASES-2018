#include <iostream>
#include <vector>
using namespace std;
int main(){
	int tam,x;
	vector<int> v;
	cin>>tam;
	for(int i=0;i<tam;i++){
		cin>>x;
		v.push_back(x);
	}
	//BUBBLE SORT
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
			}
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}