#include <iostream>
using namespace std;
int factorial(int n){
	if(n==1 or n==0) return 1;
	return n*factorial(n-1);
}
int main(){
	cout<<factorial(7)<<endl;
	return 0;
}