#include <iostream>
using namespace std;

int main() {
    int detik, menit, jam, sisa_menit, sisa_jam, sisa_detik;
    
    cout<< "masukkan bilangan dalam satuan detik : "<< endl<< endl;
    cin>> detik;
    jam = detik / 3600;
    sisa_jam = detik % 3600;
    menit = sisa_jam / 60;
    sisa_menit = sisa_jam % 60;
    sisa_detik = sisa_menit % 60;
    
    cout<< "hasil konversi : "<< endl<< endl;
    cout<< detik<< " detik "<< jam << " jam "<< menit<< " menit "<< sisa_detik<< " detik ";
    return 0;
}
