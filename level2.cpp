#include <iostream>
using namespace std;

int main() {
    int detik, menit, jam, hari, sisa_hari, sisa_menit, sisa_jam, sisa_detik;
    
    cout<< "masukkan bilangan dalam satuan detik : "<< endl<< endl;
    cin>> detik;
    hari = detik / 86400;
    sisa_hari = detik % 86400;
    jam = sisa_hari / 3600;
    sisa_jam = sisa_hari % 3600;
    menit = sisa_jam / 60;
    sisa_menit = sisa_jam % 60;
    sisa_detik = sisa_menit % 60;
    
    cout<< "hasil konversi : "<< endl<< endl;
    cout<< detik<< " detik "<< hari << " hari "<< jam << " jam "<< menit<< " menit "<< sisa_detik<< " detik ";
    return 0;
}

