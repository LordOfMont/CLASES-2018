#include <iostream>
using namespace std;
int main(){
    double altura;
    cin>>altura;
    //PARA LOS PEQUEÑOS
    if(altura<150){
        cout<<"PEQUE"<<endl;
    }
    if(altura>=150 and altura<=170){
        cout<<"MEDIANO"<<endl;
    }
    if(altura>170){
        cout<<"ALTO"<<endl;
    }
    //CON IFs ANIDADOS
    if(altura<150){
        cout<<"PEQUE"<<endl;
    }
    else{
        if(altura>170){
            cout<<"ALTO"<<endl;
        }
        else{
            cout<<"MEDIANO"<<endl;
        }
    }
    return 0;
}
