#include <iostream>
using namespace std;

int main() {
    int detik, jam, menit, detik_sisa;

    cout << "Masukkan bilangan >1 (satuan detik)\n >> ";
    cin >> detik;

    jam = detik / 3600;
    detik = detik % 3600;
    menit = detik / 60;
    detik_sisa = detik % 60;

    cout << "\nHasil Konversi:" << endl;
    cout << detik + jam*3600 + menit*60 + detik_sisa << " detik = "
         << jam << " Jam, " << menit << " Menit, " << detik_sisa << " Detik." << endl;
			
	return 0;
}
