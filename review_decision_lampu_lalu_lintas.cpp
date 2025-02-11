// 3. Lampu lalu lintas

//cara pertama

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

//cara kedua

#include<iostream>
using namespace std;
int main(){
    string warna, merah, kuning, hijau;
    cout<<"Masukan warna = ";
    cin>>warna;
    if(warna=="merah"){
        cout<<"Berhenti!"<<endl;
    }else if(warna=="kuning"){
        cout<<"Bersiap!"<<endl;
    
    }else if(wanrna=="hijau"){
        cout<<"Jalan"<<endl;
    }else{
        cout<<"Warna tidak valid"<<endl;
    }
}
