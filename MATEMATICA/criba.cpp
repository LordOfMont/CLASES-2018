#include <bits/stdc++.h>
using namespace std;
int main(){
	bool criba[10001];
	memset(criba,1,sizeof criba);
	criba[0]=0;
	criba[1]=0;
	for(int i=2;i*i<=10000;i++){
		if(criba[i]){
			for(int j=i*i;j<=10000;j=j+i){
				criba[j]=0;
			}
		}
	}
	/*int n;
	cin>>n;
	if(criba[n]){
		cout<<"es primo"<<endl;
	}
	else{
		cout<<"no es primo"<<endl;
	}*/
	for(int i=200;i<=300;i++){
		if(criba[i]){
			cout<<i<<" ";
		}
	}
}