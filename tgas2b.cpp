#include<iostream>

using namespace std;

int main()

{

struct Brg {

string kode;

string nama;

short unit;

float harga;

};

struct Brg Persediaan[100] = {

    “M123”, “LCD Monitor”, 5, 1850000,

    “D124”, “CD External”, 10, 750000,

    “P125”, “Printer HP”, 7, 875000;

};

int I, N=3;

float total=0;

cout<<“ Data Persediaan”<<endl;

cout<<“---------------------------------------------------------------”,,endl;

cout<<“Kode Nama Unit Harga Total”<<endl;

cout<<“---------------------------------------------------------------”<<endl;

for(I=0; I<N; I++) {

cout<< Persediaan[I].kode<<“ “<< Persediaan[I].nama<<“ “<<

Persediaan[I].unit<<“ “<<Persedian[I].harga<<“ “<<Persediaan[I].unit * Persediaan[I].harga<<endl;

total += Persediaan[I].unit * Persediaan[I].harga;

}

cout<<“--------------------------------------------------------------”<<endl;

cout<<“ Total ”<<total;

}