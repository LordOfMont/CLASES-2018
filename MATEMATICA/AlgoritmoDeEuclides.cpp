#include <bits/stdc++.h>
using namespace std;
int mcd(int a,int b){
	if(b==0) return a;
	return mcd(b,a%b);
}
int mcm(int a,int b){
	return (a*b)/mcd(a,b);
}
int main(){
	cout<<"MAXIMO COMUN DIVISOR "<<mcd(15,20)<<endl;
	cout<<"MINIMO COMUN MULTIPLO"<<mcm(15,20)<<endl;
	return 0;
}