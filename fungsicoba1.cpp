#include<iostream>
using namespace std;
int jum(int a, int b){
    return (a + b);
}
int main(){
    int x = 5, y = 12;
    int z = jum(x,y);
    cout<<"z ="<<z<<endl;
    cout<<"jumlah(2, 18)"<<jum(2, 18)<<endl;
    cout<<"jumlah(x, 18)"<<jum(x, 18)<<endl;
}