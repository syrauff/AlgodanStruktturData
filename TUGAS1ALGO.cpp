#include<iostream>
using namespace std;
//Tugas_1_Algoritma;
//Syahrul_Ridho_R_Rauf;
int main(){
    int jk, tkomisi, tbonus,  lagi;
    int pokok[100], komisi[100], bonus[100], penjualan[100], gaji[100];
    long tpenjualan=0, tgaji=0;
    string nama[100];
    tkomisi=0;
    tbonus=0;
    system("cls");
    
    cout<<"Jumlah karyawan :"; cin>>jk;
    for (lagi=1; lagi<=jk; lagi++){
        //for penghitungan gaji per-orang
        cout<<"______________________________________"<<endl;
cout<<"Masukkan nama sales : "; cin>>nama[lagi];
cout<<"Masukkan gaji pokok : ";cin>>pokok[lagi];
cout<<"Masukkan hasil penjualan : ";cin>>penjualan[lagi];

    if (penjualan[lagi]<=5000000){
        komisi[lagi] = penjualan[lagi] * 0.08;
}   else{
        komisi[lagi] = penjualan[lagi] * 0.12;
    }

    if (penjualan[lagi]>=10000000){
        bonus[lagi] = penjualan[lagi] * 0.05;
}   else{
        bonus[lagi] = 0;
    }

gaji[lagi] = pokok[lagi] + komisi[lagi] + bonus[lagi];
tbonus = tbonus + bonus[lagi];
tkomisi = tkomisi + komisi[lagi];
tpenjualan = tpenjualan + penjualan[lagi];
tgaji = tgaji + gaji[lagi];


    }
    cout<<"============================="<<endl;
    cout<<"============================="<<endl;
    cout<<"============================="<<endl;
     for (lagi=1; lagi<=jk; lagi++){
cout<<"Masukkan nama sales : "<<nama[lagi]<<endl;
cout<<"Masukkan gaji pokok : "<<pokok[lagi]<<endl;
cout<<"Masukkan hasil penjualan : "<<penjualan[lagi]<<endl;
cout<<"Bonus yang didapat : "<<bonus[lagi]<<endl;
cout<<"Komisi yang didapat : "<<komisi[lagi]<<endl;
cout<<"Gaji bersih yang didapat : "<<gaji[lagi]<<endl;
cout<<"______________________________________"<<endl;
     }
cout<<"===============(Total)==============="<<endl;
cout<<"Total penjualan : "<<tpenjualan<<endl;
cout<<"Total komisi : "<<tkomisi<<endl;
cout<<"Total bonus : "<<tbonus<<endl;
cout<<"Total gaji : "<<tgaji<<endl;
return 0;
}