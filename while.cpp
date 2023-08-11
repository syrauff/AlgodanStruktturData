#include<iostream>
using namespace std;
int main(){
    int nopol, kd, i, jk, jp=0, ju=0, jd=0;
    i=1;
    cout<<"jumlah data :";cin>>jk;
    do{
        cout<<"kode kendaraan :";cin>>kd;
        if(kd==1) jp=jp+1;
        else if(kd==2) ju=ju+1;
        else if (kd==3) jd=jd+1;
        else cout<<"eror";
        i++;
    } while(i<=jk);
     if (jp>ju && jp>jd)
     cout <<"kend pribadi paling banyak"<<endl;
     else if (ju>jd && ju>jd)
     cout <<"kend umum paling banyak"<<endl;
     else if (jd>ju && jd>jp)
     cout <<"kend dinas paling banyak"<<endl;
    
   return 0;
}