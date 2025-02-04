//5. Menentukan diskon
#include<iostream>
using namespace std;
int main(){
    float total, diskon;
    cout<<"Total pembelian = ";
    cin>>total;
    if(total>=500000){
        diskon = 0.3*total;
        cout<<"Anda mendapatkan diskon sebesar Rp."<<diskon<<endl;
        cout<<"Total yang harus dibayar sebesar Rp."<<total-diskon<<endl;
    }else if(total>=200000){
        diskon= 0.2*total;
        cout<<"Anda mendapatkan diskon sebesar Rp."<<diskon<<endl;
        cout<<"Total yang harus dibayar sebesar Rp."<<total-diskon<<endl;
    }else if (total>=1000000){
        diskon = 0.1*total;
        cout<<"Anda mendapatkan diskon sebesar Rp."<<diskon<<endl;
        cout<<"Total yang harus dibayar sebesar Rp."<<total-diskon<<endl;
    }else if (total<=100000){
        cout<<"Tidak dapat potongan diskon";
    }else{
        
    }
    return 0;
}