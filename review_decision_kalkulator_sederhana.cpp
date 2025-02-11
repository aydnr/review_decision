#include<iostream>
using namespace std;
int main(){
    int a,b;
    int pilihan;

    cout<<"Masukan bilangan pertama = ";
    cin>>a;
    cout<<"Masukan bilangan kedua = ";
    cin>>b;

    cout<<"\n==MENU MATEMATIKA==\n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\n";
    cout<<"Masukan pilihan anda = ";
    cin>>pilihan;
    if(pilihan==1){
        cout<<"Hasil operasi tersebut = "<<a+b;
    }else if(pilihan == 2){
        cout<<"Hasil operasi tersebut = "<<a-b;
    }else if(pilihan == 3){
        cout<<"Hasil operasi tersebut = "<<a/b;
    }else if(pilihan == 4){
        cout<<"Hasil operasi tersebut = "<<a*b;
    }else{
        cout<<"Pilihan tidak tersedia"<<endl;
    }
    return 0;
}
