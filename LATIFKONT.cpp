#include<iostream>
using namespace std;
int main()
{
    string nama[20];
    int js,hp[20],gp[20],k[20],b[20],gb[20],tk,tb,tp,tg,i;

    cout<<"Masukan jumlah Sales: ";cin>>js;
    cout<<"------------------------------------------- \n"<<endl;

    for(i=1;i<=js;i++){
        cout << "sales ke- "<<i<<endl;10

        cout << "Masukkan Nama          : ";cin>>nama[i];
        cout << "Masukan Gaji Pokok     : ";cin>>gp[i];
        cout << "Masukan Hasil Penjualan: ";cin>>hp[i];
        cout<<"\n";
        
        if(hp[i]>5000000){
            k[i] = hp[i]*0.12;
        }else
            k[i] = hp[i]*0.08;

        if(hp[i]>10000000){
            b[i] = hp[i]*0.05;
        }else
            b[i] = 0;
        gb[i] = gp[i]+k[i]+b[i];
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"MENGHITUNG GAJI SALES"<<endl;
    cout<<"------------------------------------------- \n"<<endl;
    for(i=1;i<=js;i++){
        cout<<"Nama Sales     : "<<nama[i]<<endl;
        cout<<"Hasil Penjualan: "<<hp[i]<<endl;
        cout<<"Komisi         : "<<k[i]<<endl;
        cout<<"Bonus          : "<<b[i]<<endl;
        cout<<"Gaji Bersih    : "<<gb[i]<<endl;
        cout<<"\n";

        tp = tp + hp[i];
        tk = tk + k[i];
        tb = tb + b[i];
        tg = tg + gb[i];
    }
    cout<<"-------------------------------------------"<<endl;
    cout<<"TOTAL GAJI YANG AKAN DIKELUARKAN PERUSAHAAN"<<endl;
    cout<<"------------------------------------------- \n"<<endl;
    cout<<"Total Hasil Penjualan: "<<tp<<endl;
    cout<<"Total Komisi         : "<<tk<<endl;
    cout<<"Total Bonus          : "<<tb<<endl;
    cout<<"Total Gaji           : "<<tg<<endl;
    system("pause");
}
