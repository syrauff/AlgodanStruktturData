#include<iostream>
using namespace std;
int main()
{
    //string nama[3] = {"Hilal", "Rizki", "Didin"};
    short i=1;
    string nama[3];

    do {
        cout<<"input nama : ";
        cin>>nama[i];
        i++;
    }while(i<=4);

    for (i=0; i=3; i++)
        cout<<nama[i]<<endl;

}
