#include<iostream>
using namespace std;
int main(){
    short i, angka=56, bulat;
    cout<<"Masukkan bilangan bulat :"; cin>>bulat;
    for(i=10; i>0; i--){
    angka = angka - i;
    cout<<angka<<" ";
    }
    return 0;
}