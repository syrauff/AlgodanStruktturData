#include<iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<<"Harga tiket :";
  cin>>a;
  cout<<"Masukkan Umur :";
  cin>>b;
  
  if (b<=6){
  c = a - a*0.1;
  cout<<"Anda dapat diskon 10%, anda harus bayar :"<<c<<endl;
  cout<<"dari harga awal :"<<a<<endl;
  }
  else {
  cout<<"Anda harus bayar :"<<c<<endl;
   }
  }
  
