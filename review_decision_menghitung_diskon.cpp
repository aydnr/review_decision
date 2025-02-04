//2. Menentukan Diskon

#include<iostream>
using namespace std;
int main(){
    float total, diskon=0;
    cout<<"Total pembelian = ";
    cin>>total;
    if(total>=100000){
        diskon = 0.05*total;
        cout<<"Anda mendapatkan diskon sebesar Rp."<<diskon<<endl;
        cout<<"Total yang harus dibayar adalah Rp."<<total-diskon;
    }else{
        cout<<"Total yang harus dibayar adalah Rp."<<total;
    }
return 0;
}