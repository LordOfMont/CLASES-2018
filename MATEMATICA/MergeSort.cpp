#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
void merge(int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	vector<int> L(n1);
	vector<int> R(n2);
	for (i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (j = 0; j < n2; j++)
        R[j] = v[m + 1+ j];
    cout<<"L ";
    for(int d=0;d<L.size();d++){
    	cout<<L[d]<<" ";
    }
    cout<<endl;
    cout<<"R ";
    for(int d=0;d<R.size();d++){
    	cout<<R[d]<<" ";
    }
    cout<<endl;
    i=0;
    j=0;
    k=l;
    while(i<n1 and j<n2){
    	if(L[i]<=R[j]){
    		v[k]=L[i];
    		i++;
    	}
    	else{
    		v[k]=R[j];
    		j++;
    	}
    	k++;
    }
    while(i<n1){
    	v[k]=L[i];
    	i++;
    	k++;
    }
    while(j<n2){
    	v[k]=R[j];
    	j++;
    	k++;
    }
}
void imprimir(){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
void mergesort(int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(l,m);
		cout<<"acabe "<<l<<","<<m<<endl;
		imprimir();
		mergesort(m+1,r);
		cout<<"acabe "<<m+1<<","<<r<<endl;
		imprimir();
		cout<<"mezclar "<<l<<" "<<m<<" "<<r<<endl;
		merge(l,m,r);
		imprimir();
	}
}

int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	imprimir();
	mergesort(0,n-1);
	imprimir();
	return 0;
}