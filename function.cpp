#include<iostream>
using namespace std;
int kuadrat(int a);
int jumlahkuadrat(int a, int b);
int main(){
    int x=3, y=4;
    int z=jumlahkuadrat(x,y);
    cout<<"Z= "<<z<<endl;
    return 0;
}
int kuadrat(int a){
    return (a*a);
}
int jumlahkuadrat(int a, int b){
    return (kuadrat(a));
}
