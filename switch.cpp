#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Masukkan angka 1/2/3 :";

  cin>>a;
  switch(a){
    case 10:
    cout<<"lebih dari sama dengan Satu dan kurang dari sama dengan 8";
    break;
    default:
    cout<<"Diluar jangkauan";
  }
  }