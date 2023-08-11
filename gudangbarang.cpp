#include<iostream>
using namespace std;
int main()
{
    string nm, lg ="y";
    int jb=0, thg=0, hg;
    while (lg == "y") {
        cout<<"------------------"<<endl;
        cout<<"Nama Barang : ";
        cin>>nm;
        cout<<"harga Barang : ";
        cin>>hg;
        jb = jb + 1;
        thg = thg + hg;
        cout<<"------------------"<<endl;
        cout<<"ada barang? (y/t) : ";
        cin>>lg;
    }

    

    cout<<"Jumlah Barang = "<<jb<<endl;
    cout<<"Total Harga = "<<thg<<endl;
}
