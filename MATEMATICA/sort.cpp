#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int tam,x;
	vector<int> v;
	cin>>tam;
	for(int i=0;i<tam;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<tam;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}