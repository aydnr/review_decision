//1. bilangan ganjil genap

#include<iostream>
using namespace std;
int main(){
    int angka;
    cout<<"Masukan angka = ";
    cin>>angka;
    if(angka % 2 == 0){
        cout<<"Bilangan yang anda masukan adalah "<<angka<<endl;
        cout<<"Bilangan tersebut adalah bilangan genap"<<endl;
    }else {
        cout<<"Bilangan yang anda masukan adalah "<<angka<<endl;
        cout<<"Bilangan tersebut adalah bilangan ganjil"<<endl;
    }
}
