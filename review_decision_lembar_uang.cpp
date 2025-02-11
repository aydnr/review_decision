//menentukan jumlah lembar uang pecahan
#include <iostream>
using namespace std;

int main() {
    int uang; 
    cout << "Masukkan jumlah uang dalam rupiah: ";
    cin >> uang;

    int sisa_uang = uang;

    cout << "Pecahan uang:" << endl;
    if (sisa_uang >= 100000) {
        int jumlah = sisa_uang / 100000;
        sisa_uang %= 100000;
        cout << "100.000 : " << jumlah << " lembar" << endl;
    }
    if (sisa_uang >= 50000) {
        int jumlah = sisa_uang / 50000;
        sisa_uang %= 50000;
        cout << "50.000 : " << jumlah << " lembar" << endl;
    }
    if (sisa_uang >= 20000) {
        int jumlah = sisa_uang / 20000;
        sisa_uang %= 20000;
        cout << "20.000 : " << jumlah << " lembar" << endl;
    }
    if (sisa_uang >= 10000) {
        int jumlah = sisa_uang / 10000;
        sisa_uang %= 10000;
        cout << "10.000 : " << jumlah << " lembar" << endl;
    }
    if (sisa_uang >= 5000) {
        int jumlah = sisa_uang / 5000;
        sisa_uang %= 5000;
        cout << "5.000 : " << jumlah << " lembar" << endl;
    }
    if (sisa_uang >= 2000) {
        int jumlah = sisa_uang / 2000;
        sisa_uang %= 2000;
        cout << "2.000 : " << jumlah << " lembar" << endl;
    }
    if (sisa_uang >= 1000) {
        int jumlah = sisa_uang / 1000;
        sisa_uang %= 1000;
        cout << "1.000 : " << jumlah << " lembar" << endl;
    }

    return 0;
}