//6. sistem keanggotaan gym

#include<iostream>
using namespace std;
int main(){
    string anggota, platinum, silver, gold;
    int jumlah;
    cout<<"Masukan jenis keanggotaan anda: ";
    cin>>anggota;
    cout<<"Masukan jumlah latihan yang dilakukan: ";
    cin>>jumlah;
    if(anggota=="silver"){
        cout<<"Anda masih bisa latihan sebanyak "<<10-jumlah<<"X lagi bulan ini"<<endl;
    }else if(anggota=="gold"){
        cout<<"Anda masih bisa latihan sebanyak "<<20-jumlah<<"X lagi bulan ini"<<endl;
    }else if(anggota=="platinum"){
        cout<<"Silahkan latihan kapanpun"<<endl;
    }else{
        
    }
}