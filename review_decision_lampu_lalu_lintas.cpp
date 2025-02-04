// 3. Lampu lalu lintas 
#include<iostream>
using namespace std;
int main(){
    string warna, merah, kuning, hijau;
    cout<<"Masukan warna = ";
    cin>>warna;
    if(warna=="merah"){
        cout<<"Berhenti!"<<endl;
    }else{
        if(warna=="kuning"){
        cout<<"Bersiap!"<<endl;
    }else{
        if(warna=="hijau"){
        cout<<"Jalan"<<endl;
    }else{
        cout<<"Warna tidak valid"<<endl;
    }}}
}