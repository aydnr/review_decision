#include<iostream>
using namespace std;
int main(){
    int pilihan;
    int a,b;
    cout<<"==MENU==\n1. Menghitung Volume Kubus\n2. Menghitung Luas Lingkaran\n3. Menghitung Volume Silinder\n";
    cout<<"Masukan pilihan (1-3): ";
    cin>>pilihan;

    switch(pilihan){
        case 1:
        cout<<"==Menghitung volume kubus==\n";
        cout<<"Panjang sisi kubus = ";
        cin>>a;
        cout<<"Volume kubus adalah = "<<a*a*a;
        break;
        case 2:
        cout<<"==Menghitung luas lingkaran==\n";
        cout<<"Panjang jari-jari lingkaran = ";
        cin>>a;
        cout<<"Luas lingkaran adalah = "<<a*a*3.14;
        break;
        case 3:
        cout<<"==Menghitung volume silinder==\n";
        cout<<"Panjang jari-jari = ";
        cin>>a;
        cout<<"Tinggi silinder = ";
        cin>>b;
        cout<<"Volume silinder adalah = "<<3.14*a*a*b;
    }   
}