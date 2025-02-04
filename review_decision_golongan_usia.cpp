//4. menentukan golongan sesuai usia

#include<iostream>
using namespace std;
int main(){
    int usia;
    cout<<"Masukan Usia = ";
    cin>>usia;
    if(usia<=5){
        cout<<"Anda termasuk golongan Balita"<<endl;
    }else if(usia<=12){
        cout<<"Anda termasuk golongan Anak-anak"<<endl;
    }else if(usia<=17){
        cout<<"Anda termasuk golongan Remaja"<<endl;
    }else if(usia<=59){
        cout<<"Anda termasuk golongan Dewasa"<<endl;
    }else{
        cout<<"Anda termasuk golongan Lansia"<<endl;
    }

}